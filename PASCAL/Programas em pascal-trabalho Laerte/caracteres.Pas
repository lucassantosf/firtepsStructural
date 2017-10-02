PROGRAM Ascii(INPUT,OUTPUT);
VAR i,n,val:INTEGER;
        c:CHAR;

BEGIN
     n:=0;
     FOR i:=0 TO 256 DO
     BEGIN
          n:=n+1;
          WRITELN(i,' -> ',CHR(i),' ');
          IF n=22 THEN BEGIN
                            WRITELN('c para continuar');
                            REPEAT
                            READLN(c);
                            UNTIL c='c';
                            n:=0;
                       END;
     END;
     READLN

  Readln;
End.
