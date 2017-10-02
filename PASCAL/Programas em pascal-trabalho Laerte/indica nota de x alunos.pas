PROGRAM NotasPositivas(INPUT,OUTPUT);
VAR n,conta,i,nota:INTEGER;
BEGIN
     WRITE('Quantos estudantes obtiveram classificao na frequencia ? ');
     READLN(n);
     conta:=0;
     FOR i:=1 TO n DO
     BEGIN
          WRITE('Qual a nota que o estudante obteve ? ( 0 a 20 ) ');
          READLN(nota);
          IF nota>=10 THEN conta:=conta+1
     END;
     WRITELN('Existem ',conta,' estudantes com nota positiva')
END.
