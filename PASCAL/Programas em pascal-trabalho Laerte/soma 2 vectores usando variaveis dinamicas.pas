PROGRAM Soma_de_2_Vectores(input,output);

TYPE vector=ARRAY[1..2000] OF REAL;
     pvector=^vector;

VAR pvect1,pvect2:pvector;
    i,n:INTEGER;

PROCEDURE Le_vector(vector:pvector;n:INTEGER);

VAR i:INTEGER;

BEGIN
     FOR i:=1 TO n DO
     BEGIN
          WRITE('Escreva o ',i,'. elemento do vector -> ');
          READLN(vector^[i]);
     END;
END;

BEGIN
     WRITE('Qual o n. de elementos de cada vector ? ');
     READLN(n);
     NEW(pvect1);
     WRITELN('Vector 1:');
     Le_vector(pvect1,n);
     NEW(pvect2);
     WRITELN('Vector 2:');
     Le_vector(pvect2,n);
     WRITELN('Vector Soma:');
     FOR i:=1 TO n DO
     WRITELN(pvect1^[i]+pvect2^[i]);
     DISPOSE(pvect1);
     DISPOSE(pvect2)
END.
