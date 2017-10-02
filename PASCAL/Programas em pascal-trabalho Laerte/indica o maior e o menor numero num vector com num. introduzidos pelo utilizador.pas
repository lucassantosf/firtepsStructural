PROGRAM Probl35(input,output);
VAR i,n,maior,menor:INTEGER;
    vector:ARRAY[1..100] OF REAL;

BEGIN
     WRITE('N§ de elementos do vector: ');
     READLN(n);
     FOR i:=1 TO n DO
     BEGIN
          WRITE('Elemento ',i,' : ');
          READLN(vector[i])
     END;
     maior:=1;
     menor:=1;
     FOR i:=2 TO n DO
     BEGIN
          IF vector[i]>vector[maior] THEN maior:=i;
          IF vector[i]<vector[menor] THEN menor:=i;
     END;
     WRITELN('O maior elemento ‚ o ',maior,' e vale ',vector[maior]);
     WRITELN('O menor elemento ‚ o ',menor,' e vale ',vector[menor]);
END.
