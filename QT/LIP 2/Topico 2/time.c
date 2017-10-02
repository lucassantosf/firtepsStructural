/*
Programa Time.c
Desenvolvido por Lucas Ferreira dos Santos
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    
    int i=0;
    time_t ini = time(0);
    
    while (i<=1000) {
          printf("Contador : %i \n",i);
          i++;
    }
    printf("---------------------------------------------------------------\n");
        printf("| |                                 |                          \n");
        printf("| |                                _|_                         \n");
        printf("| |                               |   |                        \n");
        printf("| |                               |___|                        \n");
        printf("| |                                 |                          \n");
        printf("| |                             ----|----                      \n");
        printf("| |                                 |                          \n");
        printf("| |                                 |                          \n");
        printf("| |                                / \                         \n");
        printf("| |                               /   \                        \n");
        printf("| |                              /     \                       \n");
        system("pause") ;
    
    printf("\ duração do metodo em s: %d \n", time (0) - ini);
    system ("pause");
    return 0;
}       
