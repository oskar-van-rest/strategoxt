\literate[Asfix-2-abox]
% GT -- Grammar Tools
% Copyright (C) 2000 Merijn de Jonge <mdejonge@cwi.nl>
%                    Eelco Visser <visser@acm.org>
%                    Joost Visser <jvisser@cwi.nl>
%
% This program is free software; you can redistribute it and/or modify
% it under the terms of the GNU General Public License as published by
% the Free Software Foundation; either version 2, or (at your option)
% any later version.
%
% This program is distributed in the hope that it will be useful,
% but WITHOUT ANY WARRANTY; without even the implied warranty of
% MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
% GNU General Public License for more details.
%
% You should have received a copy of the GNU General Public License
% along with this program; if not, write to the Free Software
% Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
% 02111-1307, USA.

% $Id: Asfix-2-abox.r,v 1.4 2002/08/01 12:59:53 mdejonge Exp $

% Author: Merijn de Jonge (mdjonge@cwi.nl)
% Changes: Eelco Visser <visser@acm.org> 19/5/20001
% - 

\begin{code}
module Asfix-2-abox
imports
   lib make pp-tables-io asfix misc instantiate Literal-lib
   layout prodcons Bracket-Symbol

signature
   constructors
      PP-Table : String -> Option
      layout:    String -> Layout      

strategies

   Asfix-2-abox = 
     iowrap(asfix2abox,
             Option( "-V", !Verbose(),           !"-V               verbose execution." )
        +    Option( "-c", !Conservative(),      !"-c               Conservative pretty-printing (only format where needed).")
        + ArgOption( "-p", \x -> PP-Table(x)\ ,  !"-p <table>       Use pretty-print entries from <table>" ))

   asfix2abox = 
      ?(options, term);
      // Obtain list of pp tables. Reverse to get correct ordering of
      // tables
      <collect(\ PP-Table(t) -> t \)>options;reverse;
      read-pp-tables;
      <repeat( sometd({s:?cf(s);!s }))>term;

      // Retrieve a list of all layout nodes and apply "appl2abox" to
      // the parse-tree where the layout nodes have been removed
      split( 
         topdown(
            try(is-list;filter(not(opt(layout));not(layout(id))))
         );
         appl2abox,
         collect'(layout(id))
       );
      insert-layout;
      split( !options, id )
rules

symbol2abox: 
   (lit(s), _, path, number ) -> S(s)

symbol2abox: 
   (sort(s), str, path, number ) -> S(str)
   where
      <is-string>str

symbol2abox: 
   (char-class(s), char, path, number ) -> S(<implode-string>[char])

symbol2abox: 
   (sort(s), t, path, number ) -> abox
   where
      <not(is-string)>t;
      <appl2abox>t => abox
      
symbol2abox: 
   (opt(s), appl(_,[]), path, number ) -> []

symbol2abox: 
   (opt(s), appl(syms,[x]), path, number ) -> abox
   where
      <make-path>(path, number) => new-path;
      <get-pp-entry>(opt(s), new-path) => template;
      <symbol2abox>(s, x, new-path, 1) => abox';
      <filter-literals;instantiate>(template, [abox']) => abox

symbol2abox: 
   (iter(s), lst, path, number) -> abox
   where
      <build-list>(iter(s), lst, path, number ) => abox

symbol2abox: 
   (iter-star(s), lst, path, number ) -> abox
   where
      <build-list>(iter-star(s), lst, path, number ) => abox
      
build-list: 
   ( s, lst, path, number) -> abox
   where
      <make-path>(path, number ) => new-path;
      !s;(iter(?sym)+iter-star(?sym));
      <get-pp-entry>(s, new-path) => pp-entry;
      !lst;

      map({t, ab: \ t -> ab 
         where
           <symbol2abox>(sym, t, new-path, number) => ab \
         } ) => aboxes;
      <instantiate>(pp-entry, [aboxes]) => abox

symbol2abox: 
   (iter-sep(sym,sep), lst, path, number) -> aboxes
   where 
      <build-sep-list>(iter-sep(sym, sep), lst, path, number ) => aboxes

symbol2abox: 
   (iter-star-sep(sym,sep), lst, path, number) -> aboxes
   where 
      <build-sep-list>(iter-star-sep(sym, sep), lst, path, number ) => aboxes

build-sep-list:
   (s, lst, path, number ) -> abox
   where
      <make-path>(path, number ) => new-path;
      !s;(iter-sep(?sym, ?sep)+iter-star-sep(?sym, ?sep) );
      <get-pp-entry>(s, new-path) => pp-entry;
      <nzip( BuildSepList(!sym, !sep, !new-path, !number) )>lst => aboxes;
      <instantiate-sep-list(!pp-entry)>aboxes
       => abox

BuildSepList(sym, sep, path, number):
   (number, trm) -> abox
   where
   (
      <even>number;
      !(<sep>(), trm,  <path>(), 2);
      symbol2abox;
      try( \ x -> [x] where not(is-list) \ )
   <+
      !(<sym>(), trm, <path>(), 1);
      symbol2abox; 
      try(\ x -> [x] where not(is-list) \ )
   )
   => abox


symbol2abox:
   (alt(s1,s2), appl, path, number ) -> abox
   where
      <make-path>(path, number ) => new-path;
      !(alt(s1,s2), appl, new-path, 1 ) =>s;
   rec x(
   { s0, s1, s2, arg, attrs, prod, number, path:
      ?(alt(s1, s2), appl(prod([s1], alt(s1,s2), attrs),arg), path, number );
      !(s1,          appl(prod([s1], s1,         attrs),arg), path, number ); 
      x
      
   <+
      ?(alt(s1, s2), appl(prod([s0], alt(s1,s2),attrs),arg), path, number );
      !(s2,          appl(prod([s0], s2,attrs),arg), path, <add>(number, 1) );
      x
   <+
      ?(s1, appl( prod, [arg] ), path, number );
      <get-pp-entry>(s, path) => pp-entry;
      !(s1, arg, path, number );
      symbol2abox => abox';
      <instantiate>([<index>(number, pp-entry)], [abox'] )
   }
   ) => abox

symbol2abox:
   (seq(syms), appl(_,args), path, number ) -> abox
   where
      <make-path>(path, number ) => new-path;
      <get-pp-entry>(seq(syms), new-path) =>  template;
      <seq2abox>( <filter(not(lit(id)))>syms,<filter(not(lit(id)))>args, new-path, 1) => abox';
      <instantiate>(template, abox') => abox

rules
make-path: (path, n ) -> ys
   where
      <conc>(path, [n]) => ys
   
strategies
seq2abox =
   rec x ({s1,ss,a1,as,number, abox1, aboxes1, path:
      ?([], [], _, _);![]
   <+
      ?([lit(_)|ss], [lit(_)|as], path, number );
      !(ss, as, path, number);
      x      
   <+
      ?([s1|ss], [a1|as], path, number );
       !(s1,a1, path, number);
       symbol2abox => abox1;
       !(ss, as, path, <add>(number,1) );
       x => aboxes1;
       ![abox1| aboxes1]
   })


rules
\end{code}

  Obtain or create a box template from an appl. Two following cases have to
  be considered:
  
\begin{enumerate}
\item 
     A constructor attribute exists for the term and the pretty-print table 
     contains an entry. Obtain the entry and return.

\item
     A constructor attribute exists for the term and the pretty-print table
     does not contain an entry. Create a new template and store it in the
     table.

\item
     No constructor exists for the term. Create a new template and store it
     in the table. Generate a constructor name form the
     symbols+literals+result sort of the production. If that fails for some
     reason, use "no-cons-name" as constructor name.
\end{enumerate}

\begin{code}

get-templ: 
   appl(prod(syms, sym, attrs), args) -> (cons-name, abox)
   where
   (
      // Obtain constructor name of production.
      <oncetd(?cons(cons-name))>attrs
   <+
      // Production does not contain a constructor attribute, try to use
      // its result sort name as constructor name.
      (
         !sym;sort(id);
         <prodcons>prod(syms, sym, attrs);
         prod(id,id,oncetd(?cons(cons-name)))

      <+
            !"no-cons-name" => cons-name
      )
   );
   <get-pp-entry>
      (prod(syms, sym, attrs([cons(cons-name)])), [cons-name]) => abox


// Obtain a BOX template, or generate templates  when no template
// is available. Two cases re considered: templates for productions and
// templates for symbols


strategies

// Obtain template for production
get-pp-entry =
   ?(prod(syms, sym, attrs), path);
   (
      <pp-table-get>path; Snd
   <+
      // No template exists; generate a new box template for constructor
      // 'cons-name' and all its nested symbols
      where(
         !prod(syms, sym, attrs);
         generate-pp-entries;
         map(StoreEntryIfNotExists)
      );
      <pp-table-get>path; Snd
   )   

// Obtain template for symbol
get-pp-entry =
   ?(sym, path );
   (
      <pp-table-get>path; Snd
   <+
(*
 No template exists; generate a new box template for the symbol and
 all its nested symbols.
 It works as follows:

 1) path looks like [constr,n_1,..,n_j]
 this indicates that a template for the n_j th symbol has to be
 constructed. 
 2) We obtain the number n_j and remove it from path
 3) From this path consisting of only numbers, we have to construct
    a completa path (including symbol names etc.). We assume the a template
    already exists for the parent symbol (with path [constr, n_i,...,n_j-1]
 4) We retrieve this template and also get the corresponding complete path.
 5) With the full path, we can call symbol2abox to build all templates
 6) We store all generated templates in case they don not already exist
 7) Finally, we retrieve the template that we were looking for

*)
      <reverse>path;[?num| reverse=>p];
      !p;
      pp-table-get; Fst;
      ( 
        \  Path(c, [p]) -> (c,[p]) \ +
        \ Path1(c)      -> (c, []) \
      ) => full-path;
      <symbol2abox( !full-path )>(num, sym);
      map(StoreEntryIfNotExists);
      <pp-table-get>path; Snd
   )
   
appl2abox =
   application-to-abox <+ fatal-ambiguity

application-to-abox: 
   appl(prod(syms, sym, attrs), args) -> abox
   where
      <get-templ>appl(prod(syms, sym, attrs), args) => (cons-name, pp-entry);
      <seq2abox>(<filter(not(lit(id)))>syms,
                 <filter(not(lit(id)))>args,
                 [cons-name], 1) => sub-boxes;
      <instantiate>(pp-entry, sub-boxes) => abox

fatal-ambiguity = 
   amb(id);
   <fatal-error>["Unable to pretty-print term due to ambiguities."]
  
\end{code}
  This strategy traverse a box template and the corresponding argument
boxes, and removes any abox from the argument list that does not correspond
to a box place holder.

example:

\begin{verbatim}
<filter-literals>([S("aap"), Arg(i), S("mies")],
                  [S("aap"), S("noot"), S("mies")]0
yields
   ([S("aap"), Arg(i), S("mies")],
    [S("noot")])
\end{verbatim}

The result tuple is suitable for instantiation.
\begin{code}
filter-literals: (templ, args) -> (templ, args')
   where
   (collect'(Arg(id) + Arg2(id,id) + S(id)), id );
      rec x ( { i, xs, xs', ys, ys', s, a:
     ([], [])
     <+
     ?([Arg(i)|xs], [s|ys]);
     <x>(xs, ys);
     ?(xs',ys');
     !([Arg(i)|xs'], [s|ys'])
     <+
     ?([Arg2(i,j)|xs], [s|ys]);
     <x>(xs, ys);
     ?(xs',ys');
     !([Arg2(i,j)|xs'], [s|ys'])
     <+
      ?([a|xs], [s|ys]);
      <x>(xs,ys);
      ?(xs',ys');
      !([a|xs'], ys')
   }     
   ) => (_, args')
\end{code}
