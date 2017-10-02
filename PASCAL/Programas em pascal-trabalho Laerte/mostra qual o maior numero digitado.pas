PROGRAM MaiorNumero(INPUT,OUTPUT);
VAR n,maior,conta,num:INTEGER;
BEGIN
     maior:=0;
     conta:=0;
     WRITE('Quantos numeros quer dar entrada ? ');
     READLN(n);
     REPEAT
           conta:=conta+1;
           WRITE('Qual o ',conta,'§ numero ? ');
           READLN(num);
           IF maior<num THEN maior:=num
     UNTIL conta=n;
     WRITELN('O numero maior ‚ ',maior)
END.
