PROGRAM Probl12(input,output);

VAR n1,n2,n3:^INTEGER;
      result:^REAL;

BEGIN
     WRITELN('Este programa calcula a media de 3 valores inteiros');
     WRITELN('Usa so variaveis dinamicas');
     WRITE('Indique o 1 valor inteiro -> ');
     NEW(n1);
     READLN(n1^);
     WRITE('Indique o 2 valor inteiro -> ');
     NEW(n2);
     READLN(n2^);
     WRITE('Indique o 3 valor inteiro -> ');
     NEW(n3);
     READLN(n3^);
     NEW(result);
     result^:=(n1^+n2^+n3^)/3;
     DISPOSE(n1);
     DISPOSE(n2);
     DISPOSE(n3);
     WRITELN('A media dos 3 valores inteiros ‚ ',result^);
     DISPOSE(result);
     READLN
END.
