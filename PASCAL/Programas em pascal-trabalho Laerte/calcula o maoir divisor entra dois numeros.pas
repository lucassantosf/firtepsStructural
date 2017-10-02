PROGRAM MaximoDivisorComum(INPUT,OUTPUT);

VAR n1,n2,divisor,resto1,resto2,mdc:INTEGER;

BEGIN
     REPEAT
           WRITE('Escreva o 1§ n£mero -> ');
           READLN(n1)
     UNTIL n1>0;
     REPEAT
           WRITE('Escreva o 2§ n£mero -> ');
           READLN(n2)
     UNTIL n2>0;
     IF n2>n1 THEN divisor:=n1
              ELSE divisor:=n2;
     REPEAT
           resto1:=n1 MOD divisor;
           resto2:=n2 MOD divisor;
           IF (resto1=0) AND (resto2=0) THEN BEGIN
                                                  mdc:=divisor;
                                                  divisor:=1
                                             END;
           divisor:=divisor-1
     UNTIL divisor=0;
     WRITELN('O M ximo Divisor Comum entre ',n1,' e ',n2,' ‚ ',mdc)
END.
 
