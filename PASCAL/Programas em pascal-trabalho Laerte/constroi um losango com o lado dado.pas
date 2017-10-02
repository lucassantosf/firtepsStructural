PROGRAM Losango(INPUT,OUTPUT);
VAR lado,m,a,y:INTEGER;
BEGIN
     REPEAT
           WRITE('Qual o valor do lado do losango (entre 1 e 12) ? ');
           READLN(lado)
     UNTIL (lado>0) AND (lado<13);
     IF lado>1 THEN BEGIN
                         m:=0;
                         a:=lado;
                         WRITELN('*':lado);
                         FOR lado:=lado-1 DOWNTO 1 DO
                         BEGIN
                              m:=m+2;
                              WRITELN('*':lado,'*':m);
                         END;
                         lado:=lado+1;
                         m:=m-2;
                         FOR y:=lado TO a-1 DO
                         BEGIN
                              WRITELN('*':y,'*':m);
                              m:=m-2;
                         END;
                         WRITELN('*':a);
                    END
               ELSE WRITELN('*');
END.
 
