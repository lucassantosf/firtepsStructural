PROGRAM Vector(input,output);

TYPE vector=ARRAY[1..2000] OF REAL;

VAR pvector:^vector;
    i,n:INTEGER;
    menor,maior:REAL;

BEGIN
     NEW(pvector);
     WRITE('Qual o n§ de elementos do vector ? ');
     READLN(n);
     FOR i:=1 TO n DO
     BEGIN
          WRITE('Escreva o ',i,'§ elemento -> ');
          READLN(pvector^[i]);
     END;
     menor:=pvector^[1];
     maior:=pvector^[1];
     FOR i:=1 TO n DO
     BEGIN
          IF pvector^[i]<menor THEN menor:=pvector^[i];
          IF pvector^[i]>maior THEN maior:=pvector^[i];
     END;
     DISPOSE(pvector);
     WRITELN('Maior: ',maior);
     WRITELN('Menor: ',menor);
END.
 
