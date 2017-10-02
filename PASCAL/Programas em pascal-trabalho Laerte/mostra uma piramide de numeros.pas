PROGRAM Piramide_de_Numeros(INPUT,OUTPUT);

VAR numlinhas,aux,coluna,conta,contacontra:INTEGER;

BEGIN
     REPEAT
     WRITE('Qual o n£mero de linhas que a pirƒmide vai ter (entre 1 e 9) ? ');
     READLN(numlinhas);
     UNTIL (numlinhas>0) AND (numlinhas<10);
     aux:=numlinhas-2;
     WRITELN('1':numlinhas);
     FOR coluna:=2 TO numlinhas DO
     BEGIN
          IF aux>0 THEN WRITE(' ':aux);
          aux:=aux-1;
          FOR conta:=1 TO coluna DO WRITE(conta);
          FOR contacontra:=coluna-1 DOWNTO 1 DO WRITE(contacontra);
          WRITELN
     END
END.
