PROGRAM Probl37a(input,output);

TYPE matriz=ARRAY[1..20,1..20] OF REAL;

VAR a,b,c:matriz;
        n:INTEGER;

PROCEDURE Dimensao(VAR zz:INTEGER);

BEGIN
     WRITE('Indique a dimensÆo das matrizes -> ');
     READLN(n)
END;

PROCEDURE Lematriz(n:INTEGER;VAR qqmatriz:matriz);
VAR i,j:INTEGER;

BEGIN
     FOR i:=1 TO n DO
     BEGIN
          FOR j:=1 TO n DO
          BEGIN
               WRITE('Valor ',i,j,': ');
               READLN(qqmatriz[i,j])
          END
     END
END;

PROCEDURE Soma_2_matrizes(n:INTEGER;a,b:matriz;VAR c:matriz);
VAR i,j:INTEGER;

BEGIN
     FOR i:=1 TO n DO
     FOR j:=1 TO n DO
     c[i,j]:=a[i,j]+b[i,j]
END;

PROCEDURE Mostra_matriz_resul(n:INTEGER;c:matriz);
VAR i,j:INTEGER;

BEGIN
     WRITELN('A soma das matrizes ‚ : ');
     FOR i:=1 TO n DO
     BEGIN
          FOR j:=1 TO n DO
          BEGIN
               WRITE(i,j,' ',c[i,j],' ')
          END;
          WRITELN
     END
END;

BEGIN  { programa principal }
     Dimensao(n);
     Lematriz(n,a);
     Lematriz(n,b);
     Soma_2_matrizes(n,a,b,c);
     Mostra_matriz_resul(n,c)
END.
