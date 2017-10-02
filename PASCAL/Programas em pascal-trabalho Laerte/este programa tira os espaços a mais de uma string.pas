PROGRAM Problema47(input,output);
USES crt;
VAR s:STRING;
  i,j:INTEGER;

BEGIN
     WRITELN('Este programa tira os espacos a mais de uma STRING');
     WRITELN;
     WRITE('Escreva uma STRING: ');
     READLN(s);
     j:=0;
     FOR i:=1 TO LENGTH(s) DO
     BEGIN
          j:=j+1;
          IF s[i]=' ' THEN BEGIN
                                 s[j]:=' ';
                                 WHILE s[i]=' ' DO
                                 i:=i+1;
                                 j:=j+1
                            END;
          s[j]:=s[i];
     END;
     WRITE('Nova STRING: ');
     FOR i:=1 TO j DO
     WRITE(s[i])
END.
