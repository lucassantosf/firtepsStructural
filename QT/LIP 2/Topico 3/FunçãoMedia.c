/*
Programa FunçãoMedia.c
Desenvolvido por Lucas Ferreira dos Santos

CRIAR UM PROGRAMA QUE CALCULE A MEDIA DE 4 NOTAS DE UM ALUNO ATRAVÉS DE UMA FUNÇÃO, MOSTRE A MÉDIA NA FUNÇÃO PRINCIPAL.
*/

#include <stdio.h>
#include <stdlib.h>

int calculos(int point1, int point2, int point3, int point4);

int main (void){
	int point1,point2,point3,point4;
	float mediafinale;
	printf(" Digite nota em algebra do aluno : \n ");
	scanf("%i",&point1);
	printf(" Digite nota em biologia do aluno : \n ");
	scanf("%i",&point2);
	printf(" Digite nota em ingles do aluno : \n ");
	scanf("%i",&point3);
	printf(" Digite nota em geografia do aluno : \n ");
	scanf("%i",&point4);
	mediafinale = calculos(point1 , point2 , point3 , point4 );
	printf(" Media final das notas :  %.2f \n\n\n\n\n\n",mediafinale);
	system("pause");
	return 0 ;
}

int calculos(int point1, int point2, int point3, int point4){
	int show ;
	show = (point1 + point2 + point3 + point4)/4;
	return show;
} 
