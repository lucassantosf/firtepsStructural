/*
Programa FunçãoPotencia.c

CRIAR UM PROGRAMA QUE CALCULE A POTENCIA DE UM NÚMERO ATRAVÉS DE UMA FUNÇÃO E ARMAZENE A RESPOSTA EM UM ARQUIVO.
*/

#include <stdio.h>
#include <stdlib.h>

int calculos(float base, float expt);

int main (void){
	FILE *Potencia;
	float base,expt,ptc;
	system("chcp 28591");
    system("cls");
	Potencia = fopen ("Potencia.txt","a");
	fclose(Potencia);
	printf("\n\nFunção Potencia\n\n\n");
	printf("     EXPOENTE\n");
	printf("BASE\n\n\n\n\n\n\n");
	printf("Digite o valor da base \t\t: ");
	scanf("%f",&base);
	printf("\nDigite o valor do expoente \t: ");
	scanf("%f",&expt);
	ptc = calculos(base , expt);
	printf("\n\nPotencia vale  \t\t\t: %.2f \n\n\n",ptc);
	system("pause");
	Potencia = fopen ("Potencia.txt","w");
    fprintf(Potencia,"\nBase : %.2f ",base);
    fprintf(Potencia,"\n\nExpoente : %.2f",expt);
    fprintf(Potencia,"\n\nPotencia : %.2f",ptc);
	fclose(Potencia);
	return 0 ;
}
int calculos(float base, float expt){
	
	float calc=1,i=1;
	while(i<=expt)
    {
    calc=(base*calc);
    i=i+1;
	}
    return calc;
    
	
} 
