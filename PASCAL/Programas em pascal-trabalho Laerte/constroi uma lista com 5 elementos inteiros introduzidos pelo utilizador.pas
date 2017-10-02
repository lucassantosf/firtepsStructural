PROGRAM Probl19(input,output);

TYPE pont_int=^comp_lista;
     comp_lista=RECORD
                      int:INTEGER;
                      seg:pont_int;
     END;

VAR lista,plista:pont_int;
    i,j:INTEGER;

PROCEDURE Acrescenta_lista(dado:INTEGER;VAR lista:pont_int);

VAR pAux:pont_int;

BEGIN
     NEW(pAux);
     pAux^.int:=dado;
     pAux^.seg:=lista;
     lista:=pAux;
END;

PROCEDURE Elimina_ultimo_lista(lista:pont_int);  { Probl21 }

VAR pAux:pont_int;

BEGIN
     pAux:=lista;
     IF pAux<>NIL THEN
     IF pAux^.seg=NIL THEN
     BEGIN
          DISPOSE(pAux);
          lista:=NIL;
     END
     ELSE BEGIN
               WHILE pAux^.seg^.seg<>NIL DO
               pAux:=pAux^.seg;
               DISPOSE(pAux^.seg);
               pAux^.seg:=NIL;
          END;
END;


BEGIN
     plista:=NIL;
     FOR i:=1 TO 5 DO
     BEGIN
          WRITE('Introduza o ',i,'. inteiro -> ');
          READLN(j);
          Acrescenta_lista(j,plista);
     END;
     Elimina_ultimo_lista(plista);  { Probl21 }
     WRITELN('Lista: ');
     lista:=plista;
     WHILE NOT(lista=NIL) DO
     BEGIN
          WRITELN(lista^.int);
          lista:=lista^.seg;
     END;
END.
