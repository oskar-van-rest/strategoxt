module sdfcons

(* $Id: prodcons.r,v 1.1 2001/05/31 13:32:29 mdejonge Exp $ *)
(*
	Author: Joost Visser (Joost.Visser@cwi.nl)
	Changes by : Merijn de Jonge, Eelco Visser, and Hedzer Westra.

        Add cons(...) attributes to Sdf productions.

        Use option --modular to prefix cons attributes with the
	name of the module they belong to.

        Bracket and reject productions remain unchanged.
        Lexical syntax productions remain unchanged.
        When a production already has a cons(..) attribute,
        it is _not_ overriden by a synthesized one.
	All constructor names in the output are quoted literals,
	even user-supplied non-quoted ones are given quotes.

        Constructor names are synthesized from productions
        roughly using the following heuristics:
          o Concatenate any literals occuring in the LHS,
            verbalizing some non-alphanumerical literals, and
            filter-out remaining non-alphanumerical literals.
            Hyphens are not filtered or verbalized.
            If the resulting constructorname does not start
            with a letter, it is qualified with
            the result sort name.
          o In the absence of (verbalizable) literals, verbalize
            the sorts of the LHS, and concatenate the resulting
            words.
          o In the absence of verbalizable literals and sorts,
            use the constructor name "dunno", qualified with the
            result sort name and suffixed with a generated
            unique string.
*)

imports 
  lib Sdf-Syntax Sdf-NormLit-Syntax 
  verbalize-sdf Literal-lib Char-lib


rules

  prodcons :
    p -> <at-cons(<uq2q> c)> p
    where <get-constr> p => c

  prodcons :
    p -> <add-attributes>(p, [cons(<mk-constr> p)])
    where <not(get-constr + is-bracket + is-reject + is-injection)> p 

  mk-constr :
    prod([],sym,_) -> c
    where <conc;strs2constr>(<syms2strs>[sym],["empty"]) => c

  mk-constr :
    prod(syms,sym,_) -> c
    where <lits2strs; strs2constr> syms => c
       <+ <conc;strs2constr>(<syms2strs>[sym],<lits2strs;empty-test>syms) => c
       <+ <syms2strs;strs2constr> syms => c
       <+ <conc;strs2constr>(<syms2strs>[sym],["dunno",<new>()]) => c

  (*
    where ( <lits2strs> syms => strs
         <+ <syms2strs> syms => strs
         <+ <conc>(<syms2strs>[sym],["dunno",<new>()]) => strs
          )
         ; <strs2constr> strs => c
  *)

  mk-constr :
    prod-fun(c,_,_,_) 	-> <normalize-constr>c

  mk-constr' :
    prod(syms,sym,_)	-> c
    where <conc;strs2constr>(<syms2strs>[sym],["dunno",<new>()]) => c


strategies

  empty-test
    = test( filter(not(empty-string))
          ; Hd
          )

  strs2constr
    = filter(not(empty-string))
(*    ; test(Hd) *)
(*    ; Cons(test(string-Hd;isUpper),id)*) (*First char of first string is Upper*)
    ; Cons(test(string-Hd;isAlpha),id) (*First char of first string is Alpha*)
    ; separate-by(!"-")
    ; concat-strings

; ?s;<not('in)>(s,["START","LCons","SCons","some","all","id","Cons","Nil","TCons","TNil","NL","L","Bracket"])
    ; !s;escape;quote

  string-Hd
    = explode-string;Hd

  normalize-constr
    = try(test(not(de-quote)) ; quote)

  empty-string
    = ?""

  at-cons(s)
    = oncetd(cons(s))

strategies

  is-injection =
    prod([syntaxless-sort], id, id)
  ; has-option(!Injections)

  syntaxless-sort =
    rec x(
	sort(id) + alt(x,x) + opt(x) 
	+ iter(x) + iter-star(x) + iter-sep(x,id) + iter-star-sep(x,id)
    )    

rules

  get-constr :
    prod(syms,sym,as) -> c
    where <oncetd(?cons(c))> as
  get-constr :
    prod-fun(f,syms,sym,as) -> c
    where <oncetd(?cons(c))> as

  get-mod:
    prod(syms,sym,as) -> c
    where <oncetd(?Id(c))> as
  get-mod:
    prod-fun(f,syms,sym,as) -> c
    where <oncetd(?Id(c))> as

  is-bracket :
    prod(syms,sym,as) -> ()
    where <oncetd(?bracket())> as
  is-bracket :
    prod-fun(f,syms,sym,as) -> ()
    where <oncetd(?bracket())> as 

  is-reject :
    prod(syms,sym,as) -> ()
    where <oncetd(?reject())> as
  is-reject :
    prod-fun(f,syms,sym,as) -> ()
    where <oncetd(?reject())> as 

  add-attributes :
    (prod(syms,sym,no-attrs()),as)
	-> prod(syms,sym,attrs(as))
  add-attributes :
    (prod(syms,sym,attrs(as')),as)
	-> prod(syms,sym,attrs(<conc>(as',as)))
  add-attributes :
    (prod-fun(fun,syms,sym,no-attrs()),as)
	-> prod-fun(fun,syms,sym,attrs(as))
  add-attributes :
    (prod-fun(fun,syms,sym,attrs(as')),as)
	-> prod-fun(fun,syms,sym,attrs(<conc>(as',as)))

