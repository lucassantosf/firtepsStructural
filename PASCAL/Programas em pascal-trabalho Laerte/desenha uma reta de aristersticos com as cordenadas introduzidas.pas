PROGRAM Linha_de_Asteriscos(INPUT,OUTPUT);
USES crt;
VAR xaler,yaler,compaler:INTEGER;
               direcaler:CHAR;

PROCEDURE Linha(x,y,comp:INTEGER;direc:CHAR);
VAR i,j:INTEGER;

BEGIN
     CASE direc OF
       'H','h':BEGIN
                    FOR i:=x TO comp+x-1 DO
                    BEGIN
                         GOTOXY(i,y);
                         WRITE('*')
                    END;
               END;
       'V','v':BEGIN
                    FOR j:=y TO comp+y-1 DO
                    BEGIN
                         GOTOXY(x,j);
                         WRITE('*')
                    END;
               END;
     END;
END;

BEGIN  { bloco principal }
     CLRSCR;
     REPEAT
     WRITE('Escreva o valor de x da origem (x>=1) -> ');
     READLN(xaler)
     UNTIL xaler>0;
     REPEAT
     WRITE('Escreva o valor de y da origem (y>=1) -> ');
     READLN(yaler)
     UNTIL yaler>0;
     WRITE('Escreva o comprimento da linha -> ');
     READLN(compaler);
     WRITE('Escreva a direc‡Æo ( h-horizontal, v-vertical ) -> ');
     READLN(direcaler);
     Linha(xaler,yaler,compaler,direcaler)
END.
