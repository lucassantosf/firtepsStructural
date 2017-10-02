/*
Programa clock.c
Desenvolvido por Lucas Ferreira dos Santos
*/
#include <stdio.h>
#include <time.h>

int main (void) {
    clock_t t0, tf;
    int i=0;
    double tempo_gasto;
    t0 = clock ();
    
    
    while (i<=100000) {
          printf("Contador: %i \n",i);
          i++;
    }

    tf = clock();
    tempo_gasto = ( (double) (tf-t0) )/ CLOCKS_PER_SEC;
    printf(" Tempo Gasto : %.2f s\n", tempo_gasto);
    
    system("pause");
    return 0;
    
}
