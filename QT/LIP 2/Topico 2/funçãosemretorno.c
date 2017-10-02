/*
Programa Funçãosemretorno.c
Desenvolvido por Lucas Ferreira dos Santos
*/
#include <stdio.h>
#include <stdlib.h>

int fatorial (int n);

int main (void) {
    int limite;
    
    printf(" Programa fatorial \n");
    printf(" Digite o fatorial que deseja calcular : ");
    scanf("%i",&limite);
    fatorial(limite);
    system("pause");
    return 0;
}

int fatorial (int n) {
    int i,fat;
    fat=1;
    for(i=1;i<=n;i++) {
        fat = fat * i;
        printf("\n fatorial de %i = a: %i \n\n",n,fat);
        }
        return 0;
}
        
                          
                      
     
