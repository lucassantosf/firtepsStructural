PROGRAM Uppercase;

{$P+}

USES crt;

VAR s:STRING[80];

FUNCTION UpCaseStr(s:STRING):STRING;
VAR i:INTEGER;

BEGIN
     FOR i:=1 TO LENGTH(s) DO
     s[i]:=UPCASE(s[i]);
     UpCaseStr:=s;
END;


BEGIN
     CLRSCR;
     s:='abc';
     WRITELN(s);
     WRITELN('Change to uppercase');
     WRITELN(UpCaseStr(s));
     WRITELN;
     WRITE('Press ENTER...');
     READLN
END.
