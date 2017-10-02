PROGRAM HorasExtra(INPUT,OUTPUT);
VAR horas:INTEGER;
    venc,quantia:REAL;
BEGIN
     REPEAT
           WRITE('Qual o vencimento base do funcion rio ? ');
           READLN(venc)
     UNTIL venc>=0;
     REPEAT
           WRITE('Quantas horas extra fez o funcion rio ? ');
           READLN(horas)
     UNTIL horas>0;
     CASE horas OF
          1..10:quantia:=(venc*(1/50))*horas;
         11..20:quantia:=(venc*(1/45))*horas;
         21..30:quantia:=(venc*(1/35))*horas;
         31..40:quantia:=(venc*(1/25))*horas
         ELSE quantia:=(venc*(1/10))*horas
     END;
     WRITELN('O vencimento total ‚ ',venc+quantia:8:4)
END.
