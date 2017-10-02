PROGRAM SomaDigitos(INPUT,OUTPUT);

VAR num,resto,restotal:INTEGER;

BEGIN
     restotal:=0;
     WRITE('Escreva o n£mero de que quer somar os digitos -> ');
     READLN(num);
     REPEAT
           resto:=num MOD 10;
           num:=num DIV 10;
           restotal:=restotal+resto
     UNTIL num<resto;
     WRITELN('A soma ‚ ',restotal+num)
END.
