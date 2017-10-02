PROGRAM NumerosDiv5(INPUT,OUTPUT);
VAR n,num,conta,result:INTEGER;
BEGIN
     conta:=0;
     result:=0;
     WRITE('Quantos n£meros quer dar entrada ? ');
     READLN(n);
     REPEAT
           conta:=conta+1;
           WRITE('Qual o n£mero ? ');
           READLN(num);
           IF num MOD 5 = 0 THEN result:=result+1
     UNTIL conta=n;
     WRITE('Existem ',result,' n£meros divisiveis por 5')
END.
