(*
 GT -- Grammar Tools
 Copyright (C) 2000 Merijn de Jonge <mdejonge@cwi.nl>
                    Eelco Visser <visser@acm.org>
                    Joost Visser <jvisser@cwi.nl>

 This program is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 2, or (at your option)
 any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 02111-1307, USA.

 $Id: graph-term2GraphXML.r,v 1.4 2001/10/08 15:42:08 mdejonge Exp $
*)

module graph-term2GraphXML
imports
  lib graph-terms GraphXML termid

strategies

  main
    = io-idwrap(?"\"graphterm-0\"", graph-term2graphXML)

  graph-term2graphXML
    = \graph(nodes(ns),edges(es)) -> <mkterm>("\"graphxml_1_1.0\"",[GraphXML([],[graph([],<conc>(ns',es'))])])
       where <map(\'id(n)          -> node1([name(<enquote>n)])\)> ns => ns';
             <map(\['id(s),'id(t)] -> edge1([source(<enquote>s),target(<enquote>t)])\)> es => es'
      \

  enquote
    = \str -> <concat-strings>["\"",str,"\""]\
