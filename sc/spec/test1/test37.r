module test37
imports lib
strategies

  main =
    ![48,65,97,92]
    ; debug
    ; map(num2char)
    ; debug

  // Digits, upper- and lowercase letters are turned into ShortChars
  // Newlines, tabs, and spaces are turned into ShortChars
  // All others are turned into NumChars. 
  num2char
    = ( ?n; where(<geq>(n,48);<leq>(n,57)); <implode-string>[n] )
   <+ ( ?n; where(<geq>(n,65);<leq>(n,90)); <implode-string>[n] )
   <+ ( ?n; where(<geq>(n,97);<leq>(n,122)); <implode-string>[n] )
   <+ \10 -> <implode-string>[92,110]\
   <+ \9  -> <implode-string>[92,116]\
   <+ \32 -> <implode-string>[92,32]\
   <+ ( num-to-string; \str -> <concat-strings>["\\",str," "]\ )

  num-to-string = 
    rec x(split(sect(mod, !10); sect(add, !48), sect(div, !10); int);
          (id, ?0; ![] <+ x); MkCons );
    reverse;
    implode-string
