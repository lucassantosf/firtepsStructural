PROGRAM DivisoresInteiros(INPUT,OUTPUT);
VAR n,divisor,resto:INTEGER;
BEGIN
     WRITE('Qual o numero de que quer saber os divisores inteiros ? ');
     READLN(n);
     FOR divisor:=n DOWNTO 1 DO
     BEGIN
          resto:=n MOD divisor;
          IF resto=0 THEN WRITELN('Divisor -> ',divisor)
     END;
END.
