PROGRAM Circulo(input,output);

VAR praio:^REAL;
    pi:real;
BEGIN
     
	NEW(praio);
     WRITE('Qual o raio do c¡rculo ? ');
     READLN(praio^);
     WRITELN('Diametro: ',praio^*2);
     WRITELN('Area: ',PI*SQR(praio^));
     WRITELN('Perimetro: ',2*PI*praio^);
     DISPOSE(praio)
END.
 
