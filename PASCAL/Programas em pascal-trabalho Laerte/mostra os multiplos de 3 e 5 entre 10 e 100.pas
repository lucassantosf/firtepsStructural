PROGRAM Multiplosde3e5(INPUT,OUTPUT);
VAR c,n,mult3,mult5:INTEGER;
        car:CHAR;
BEGIN
     c:=0;
     WRITELN('NUM       MULT.3       MULT.5');
     FOR n:=10 TO 1000 DO
     BEGIN
           mult3:=n MOD 3;
           mult5:=n MOD 5;
          IF (mult3=0) AND (mult5<>0) THEN WRITELN(n,'          X');
          IF (mult5=0) AND (mult3<>0) THEN WRITELN(n,'                       X');
          IF (mult3=0) AND (mult5=0) THEN WRITELN(n,'          X            X');
          IF ((mult3=0) AND (mult5=0)) OR (mult3=0) OR (mult5=0) THEN c:=c+1;
          IF c=23 THEN BEGIN
                            WRITE('c para continuar ');
                            REPEAT
                                  READLN(car)
                            UNTIL car='c';
                            c:=0;
                            WRITELN('NUM       MULT.3       MULT.5')
                       END;
     END;
     READLN
END.
