/*
Programa funçãocomretorno.c
Desenvolvido por Lucas Ferreira dos Santos
*/

#include <stdio.h>
#include <stdlib.h>

int soma(int n1, int n2);

int main (void) {
    int n1,n2,r;
    printf(" Digite o primeiro valor: ");
    scanf("%i",&n1);
    printf(" Digite o segundo valor : ");
    scanf("%i",&n2);
    r= soma(n1 , n2);
    printf(" A resposta eh %i\n",r);
    system("pause");
    return 0;
}

int soma (int n1, int n2 ) {
    int total ;
    total = n1 + n2;
    return total;
}
    
