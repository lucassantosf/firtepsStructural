PROGRAM RaizQuadrada(INPUT,OUTPUT);
VAR n,raiz,erro:REAL;
BEGIN
     WRITE('Qual o n£mero de que quer calcular a raiz quadrada ? ');
     READLN(n);
     raiz:=SQRT(n);
     raiz:=(n/raiz+raiz)/2;
     erro:=(n/SQR(raiz))-1;
     IF erro<1E-06 THEN WRITELN('A raiz de ',n,' ‚ ',raiz,' ',erro)
                  ELSE WRITELN('Existe um erro > 10E-06')
END.
