PROGRAM Triangulo(INPUT,OUTPUT);
VAR b:INTEGER;

PROCEDURE Desenhatriangulo(base:INTEGER);
VAR i,j,e:INTEGER;

BEGIN
     FOR i:=1 TO base DO WRITE('x');
     WRITELN;
     e:=1;
     REPEAT
           base:=base-2;
           WRITE(' ':e);
           FOR j:=1 TO base DO
           WRITE('x');
           WRITELN;
           e:=e+1
     UNTIL base=1;
END;

BEGIN  { programa principal }
     REPEAT
           WRITELN;
           WRITE('Qual a base do triƒngulo ( base entre 1 e 80 e de n£mero ¡mpar) ? ');
           READLN(b)
     UNTIL (b>0) AND (b<81) AND (ODD(b)=true);
     Desenhatriangulo(b);
     READLN
END.
 
