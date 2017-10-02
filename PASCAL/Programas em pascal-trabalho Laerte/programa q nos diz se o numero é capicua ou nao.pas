PROGRAM Capicua(INPUT,OUTPUT);

VAR n,potencias,i,num,auxnum,totalnumcont,quoc,resto,numerocont:;

BEGIN
     WRITE('Quantos d°gitos tem o seu n£mero ? ');
     READLN(n);
     potencias:=1;
     FOR i:=1 TO n-1 DO
     BEGIN
          potencias:=potencias*10
     END;
     WRITE('Escreva o n£mero -> ');
     READLN(num);
     auxnum:=num;
     totalnumcont:=0;
     REPEAT
           quoc:=num DIV 10;
           resto:=num MOD 10;
           numerocont:=resto*potencias;
           totalnumcont:=totalnumcont+numerocont;
           potencias:=potencias DIV 10;
           num:=quoc;
     UNTIL quoc=0;
     IF totalnumcont=auxnum THEN WRITELN('O n£mero Ç Capicua')
                            ELSE WRITELN('O n£mero n∆o Ç Capicua');
END.
 
