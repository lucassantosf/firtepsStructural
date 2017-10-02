PROGRAM Caracter_a(INPUT,OUTPUT);
VAR n,conta:INTEGER;
        car:CHAR;
BEGIN
     conta:=0;
     FOR n:=1 TO 10 DO
     BEGIN
          WRITE('Escreva o ',n,'§ caracter -> ');
          READLN(car);
          IF car='a' THEN conta:=conta+1
     END;
     WRITE('O caracter a foi digitado ',conta,' vezes')
END.
