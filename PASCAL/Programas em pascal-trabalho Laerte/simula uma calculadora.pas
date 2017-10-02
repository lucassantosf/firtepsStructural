PROGRAM Calculadora(INPUT,OUTPUT);

VAR totaloper,membro2:REAL;
    varifict,operador:CHAR;

BEGIN
     WRITE('Escreva a sua opera‡Æo -> ');
     READ(totaloper);
     READ(varifict);
     READ(operador);
     REPEAT
           READ(membro2);
           CASE operador OF
                '+':totaloper:=totaloper+membro2;
                '-':totaloper:=totaloper-membro2;
                '/':totaloper:=totaloper/membro2;
                '*':totaloper:=totaloper*membro2
           END;
           READ(varifict);
           READ(operador)
     UNTIL operador='=';
     WRITE(totaloper)
END.
 
