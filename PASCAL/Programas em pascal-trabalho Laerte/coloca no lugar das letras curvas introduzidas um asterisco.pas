PROGRAM LetrasCurvas(INPUT,OUTPUT);

VAR n,numletras:INTEGER;
            car:CHAR;

BEGIN
     WRITE('Qual o n£mero de letras que a linha de texto vai ter ? ');
     READLN(numletras);
     FOR n:=1 TO numletras DO
     BEGIN
          READ(car);
          CASE car OF
             'B'..'D':car:='*';
                  'G':car:='*';
                  'J':car:='*';
             'O'..'S':car:='*';
                  'U':car:='*';
          END;
          WRITE(car);
     END;
END.
