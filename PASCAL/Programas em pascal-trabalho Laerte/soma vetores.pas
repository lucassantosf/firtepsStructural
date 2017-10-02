PROGRAM Probl36(input,output);

TYPE vector=ARRAY[1..1000] OF REAL;

VAR dim:INTEGER;
  a,b,c:vector;


PROCEDURE Dimensao(VAR d:INTEGER);

BEGIN
     WRITE('Qual a dimensao do vector ? ');
     READLN(d)
END;

PROCEDURE Levector(n:INTEGER;VAR v:vector);
VAR i:INTEGER;

BEGIN
     FOR i:=1 TO n DO
     BEGIN
          WRITE('Valor ',i,' do vector : ');
          READLN(v[i])
     END
END;

PROCEDURE Soma_2_vectores(n:INTEGER;v1,v2:vector;VAR vr:vector);
VAR i:INTEGER;

BEGIN
     FOR i:=1 TO n DO vr[i]:=v1[i]+v2[i]
END;

PROCEDURE Mostra_vector_resul(n:INTEGER;v:vector);
VAR i:INTEGER;

BEGIN
     WRITELN('O vector resultante da soma ‚ : ');
     FOR i:=1 TO n DO
     WRITELN(v[i],' ')
END;

BEGIN { programa principal }
     Dimensao(dim);
     Levector(dim,a);
     Levector(dim,b);
     Soma_2_vectores(dim,a,b,c);
     Mostra_vector_resul(dim,c)
END.
