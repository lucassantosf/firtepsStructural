PROGRAM Rectangulo_de_Asteriscos(INPUT,OUTPUT);
USES crt;
VAR xaler,yaler,compaler,ladoaler:INTEGER;

PROCEDURE Rectangulo(x,y,comprect,ladorect:INTEGER);

PROCEDURE Linha(x1,y1,comp:INTEGER;direc:CHAR);
VAR i,j:INTEGER;

BEGIN
     CASE direc OF
       'H','h':BEGIN
                    FOR i:=x1 TO comp+x1-1 DO
                    BEGIN
                         GOTOXY(i,y1);
                         WRITE('*')
                    END;
               END;
       'V','v':BEGIN
                    FOR j:=y1 TO comp+y1-1 DO
                    BEGIN
                         GOTOXY(x1,j);
                         WRITE('*')
                    END;
               END;
     END;
END;

BEGIN  { Desenho do Rectハgulo }
     Linha(x,y,comprect,'h');
     Linha(x,y,ladorect,'v');
     Linha(x+comprect-1,y,ladorect,'v');
     Linha(x,y+ladorect-1,comprect,'h');
END;

BEGIN  { bloco principal }
  CLRSCR;
  REPEAT
  WRITE('Escreva a coordenada x do canto superior esquerdo do Rectハgulo (x>=1) -> ');
  READLN(xaler)
  UNTIL xaler>0;
  REPEAT
  WRITE('Escreva a coordenada y do canto superior esquerdo do Rectハgulo (x>=1) -> ');
  READLN(yaler)
  UNTIL yaler>0;
  REPEAT
  WRITE('Escreva o valor do comprimento do Rectハgulo ( comprimento>0 ) -> ');
  READLN(compaler)
  UNTIL compaler>0;
  REPEAT
  WRITE('Escreva o valor do lado do Rectハgulo ( lado>0 ) -> ');
  READLN(ladoaler)
  UNTIL ladoaler>0;
  CLRSCR;
  Rectangulo(xaler,yaler,compaler,ladoaler)
END.
