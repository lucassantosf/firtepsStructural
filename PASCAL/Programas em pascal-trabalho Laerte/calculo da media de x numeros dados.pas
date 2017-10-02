P
ROGRAM MediaInteiros(INPUT,OUTPUT);
VAR n,soma,num,media,aux:INTEGER;
BEGIN
     soma:=0;
     WRITE('De quantos numeros quer calcular a media ? ');
     READLN(n);
     aux:=n;
     WHILE n>0 DO
     BEGIN
          WRITE('Qual o n£mero ? ');
          READLN(num);
          soma:=soma+num;
          n:=n-1
     END;
     media:=soma DIV aux;
     WRITELN('A m‚dia dos ',n,' numeros ‚ ',media)
END.
