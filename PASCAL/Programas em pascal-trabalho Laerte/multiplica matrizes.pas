PROGRAM Probl37b(input,output);
VAR matrizA:ARRAY[1..50,1..50] OF REAL;
    matrizB:ARRAY[1..50,1..50] OF REAL;
    matrizR:ARRAY[1..50,1..50] OF REAL;
    n,i,j,k:INTEGER;

BEGIN
     WRITELN('Programa para calcular o resultado da multiplicaá∆o de 2 matrizes quadradas');
     WRITE('Qual a dimens∆o das matrizes ? ');
     READLN(n);
     WRITELN('Escreva os elementos da matriz A: ');
     FOR i:=1 TO n DO
     BEGIN
          FOR j:=1 TO n DO
          BEGIN
               WRITE('a',i,j,': ');
               READLN(matrizA[i,j])
          END
     END;
     WRITELN('Escreva os elementos da matriz B: ');
     FOR i:=1 TO n DO
     BEGIN
          FOR j:=1 TO n DO
          BEGIN
               WRITE('b',i,j,': ');
               READLN(matrizB[i,j])
          END
     END;
     { Multiplicaá∆o das matrizes A e B }
     FOR i:=1 TO n DO
     BEGIN
          FOR j:=1 TO n DO
          BEGIN
               matrizR[i,j]:=0;
               FOR k:=1 TO n DO
               matrizR[i,j]:=matrizR[i,j]+matrizA[i,k]*matrizB[k,j]
          END
     END;
     WRITELN('A matriz resultado da multiplicaá∆o das matrizes A e B Ç :');
     FOR i:=1 TO n DO
     BEGIN
          FOR j:=1 TO n DO
          WRITE('r',i,j,matrizR[i,j],' ');
          WRITELN
     END;
END.
