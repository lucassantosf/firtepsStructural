PROGRAM OutrosPoligonos(INPUT,OUTPUT);
VAR lados:INTEGER;
    SimNao:CHAR;

BEGIN
     WRITE('Qual o numero de lados ? ');
     READLN(lados);
     CASE lados OF
         1,2: ;
           3:WRITE('E um triangulo');
           4:BEGIN
                  WRITE('Os angulos internos sao iguais ? ');
                  READLN(SimNao);
                  IF SimNao='S' THEN WRITE('E quadrado')
                                ELSE WRITE('E losango')
             END;
           5:WRITE('E um pentagono')
     END;
     READLN
E
ND.
