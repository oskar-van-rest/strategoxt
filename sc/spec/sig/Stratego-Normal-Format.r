\literate[{\btt Stratego-Normal-Format}]

\begin{code}
module Stratego-Normal-Format
imports stratego lib
strategies

  main = iowrap(stratego-specification)

  stratego-specification =
    Specification([
      id,
      Strategies(list(strategy-definition))
    ])
    <+ debug(!"not a stratego-specification: ")

  strategy-definition =
    SDef(is-string + Mod(is-string,is-string), list(VarDec(is-string,id)), strategy-expression)
    <+ debug(!"not a strategy-definition: ")

  strategy-expression =
  rec exp(
	Id
	+ Fail
	+ Not(exp)
	+ Test(exp)
	+ Seq(exp, exp)
	+ Choice(exp, exp)
	+ LChoice(exp, exp)
	+ GChoice(exp, exp)
	+ LGChoice(exp, exp)
	+ Call(SVar(is-string + Mod(is-string,is-string)),list(exp))    
	+ Rec(is-string, exp)
	+ Path(is-int, exp)
	+ Cong(is-string, list(exp))
	+ One(exp)
	+ Some(exp)
	+ All(exp)
	+ Thread(exp)
	+ Match(term-expression)
	+ Build(term-expression)
	+ Scope(list(is-string), exp)
	+ Where(exp)
	+ Prim(is-string,list(term-expression))
	+ Let(list(SDef(is-string,[],exp)),exp)
	<+ debug(!"not a strategy-expression: ")
	)

  term-expression =
  rec trm(
	Wld 
	+ Var(is-string)
	+ Int(is-int)
	+ Real(is-real)
	+ Str(is-string)
	+ BuildDefault(trm)
	+ As(Var(is-string), trm)
	+ Op(is-string, list(trm))
	<+ debug(!"not a term-expression: ")
	)
\end{code}
