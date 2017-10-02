PROGRAM Divisores_de_4_valores(INPUT,OUTPUT);
VAR valor1,valor2,valor3,valor4:INTEGER;

PROCEDURE Leitura(n:INTEGER;VAR num:INTEGER);

BEGIN
     REPEAT
           WRITE('Escreva o ',n,'§ valor -> ');
           READLN(num);
     UNTIL (num>0) AND (num<1001);
END;

FUNCTION Contadivisores(num:INTEGER):INTEGER;
VAR divisor,c:INTEGER;

BEGIN
     c:=0;
     FOR divisor:=num DOWNTO 1 DO
     IF num MOD divisor=0 THEN c:=c+1;
     Contadivisores:=c;
END;

PROCEDURE Escrita(num,conta:INTEGER);

BEGIN
     WRITELN('O valor ',num,' tem ',conta,' divisores');
END;

BEGIN   { bloco principal }
     Leitura(1,valor1);
     Leitura(2,valor2);
     Leitura(3,valor3);
     Leitura(4,valor4);
     Escrita(valor1,Contadivisores(valor1));
     Escrita(valor2,Contadivisores(valor2));
     Escrita(valor3,Contadivisores(valor3));
     Escrita(valor4,Contadivisores(valor4));
END.
