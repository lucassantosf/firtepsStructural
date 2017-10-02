PROGRAM Probl50A(input,output);
VAR fich:TEXT;
       s:STRING;

BEGIN
     ASSIGN(fich,'texto.txt');
     REWRITE(fich);
     s:='ab de?gz  2!vl   345    aaa';
     WRITE(fich,s);
     CLOSE(fich)
END.
