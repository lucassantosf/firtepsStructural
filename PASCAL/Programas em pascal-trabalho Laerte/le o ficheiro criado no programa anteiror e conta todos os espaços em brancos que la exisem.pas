PROGRAM Probl50B(input,output);
VAR fich:TEXT;
       s:STRING;
 conta,i:INTEGER;

BEGIN
     ASSIGN(fich,'texto.txt');
     RESET(fich);
     READLN(fich,s);
     conta:=0;
     FOR i:=1 TO LENGTH(s) DO
     IF s[i]=' ' THEN conta:=conta+1;
     WRITELN('Existem ',conta,' espa‡os em branco');
END.
