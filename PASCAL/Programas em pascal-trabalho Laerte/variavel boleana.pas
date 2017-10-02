PROGRAM Boolean1(INPUT,OUTPUT);
VAR intei:INTEGER;
    continua:BOOLEAN;

BEGIN
     REPEAT
           WRITE('Escreva um n£mero inteiro ');READLN(intei);
           IF (intei<=10) OR (intei>20) THEN continua:=FALSE
                                        ELSE continua:=TRUE;
           WHILE continua DO
           BEGIN
                WRITELN(intei);intei:=intei+1;
                continua:=intei<=20
           END;
     UNTIL NOT continua
END.
