/*
	Desenvolvido por Lucas Ferreira dos Santos
	Treinos de Reabilitação
	Curso Ciencia da Computação

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include <stdlib.h> 
#include <conio.h> 
#include <math.h> 
#include <stdio.h> 

main(){


	system ("chcp 28591");
	system ("cls");
		
}










/*   - -  - - - -  - - -  - - - - -EXEMPLOS DE PROGRAMAS - - - - - - -  -- - - -- - - - - - - - - - - - -  */

/*  Pergunta nome e idade do usuario, em seguida exibindo na tela seu nome e idade+1
 	
	char nome[30]; 
 	int idade; 
 	printf (" Digite sua idade : "); 
 	scanf  ("%d",&idade); 
 	printf (" Digite seu nome ");
	scanf  ("%s",nome);
	
	printf (" Sr.%s , no proximo ano, voce terá %d anos", nome, idade+1); 
	system("PAUSE"); 
	return 0; 
 
*/


/*	Calcular o quadrado de qualquer numero 
	
	int numero;   
   
	printf(" Entrada de numero :  ");
	scanf("%d",&numero);
	printf(" O quadrado de %d tem valor de %d \n \n \n ", numero, numero*numero);
	system ("pause"); 
*/

/*	Conversão de Graus Celsius e Fahrenheit


	float temc, temf;
	int chave;
	char vai='s';
	while (vai=='s') {
	
	printf("\n\n\n  Digite para tal conversão : \n");
	printf(" --(1)-- Centigrados ===> Fahrenheit  -----\n");
	printf(" --(2)-- Fahrenheit  ===> Centigrados -----\n\n\n\n");
	printf("===============================");
	scanf("%d", &chave);
	system ("cls");
	while ( chave!=1 && chave!=2){	
		printf("\n\tCodigo invalido \n\tDigite novamente\n\t");
		scanf("%d", &chave);
		system ("cls");
	}
		
	if (chave==1) {
		printf("Digite a temperatura em graus Celsius : \n\n");
		scanf("%f", &temc);
		temf = ((temc*9 + 160)/5 );
		printf("\n\nTemperatura equivalente em Fahrenheit : %.2f \n\n\n", temf); 
		system("pause");
	}
	else {
		printf("Digite a temperatura em graus Fahrenheit : \n\n");
		scanf("%f", &temf);
		temc = ((temf-32)*5)/9;
		printf("\n\nTemperatura equivalente em Celsius : %.2f \n\n\n", temc); 
		system("pause");
	}
	system("cls");
	printf("Deseja realizar mais alguma conversão (S/N) ");
	scanf("%s",&vai);
	
	while (vai!='s' && vai!='n'){
		printf("\n\tCodigo invalido \n\tDigite novamente\n\t");
		scanf("%c", &vai);
		system ("cls");
	}	
}

*/


/*	Calcular volumes de Latas
	
	
	float raio,altura,volume;
	char key='s';
	while(key=='s'){
		printf("\n\n\n\n\t\tPrograma para Calcular Volume de Latas\n");
		printf("\n\t\tInforme o raio da sua lata \t:\t");
		scanf("%f",&raio);
		printf("\n\t\tInforme a altura da lata \t:\t");
		scanf("%f",&altura);
		volume = 3.14159 * raio * altura ; 
	
		printf("\n\n\n\t\tVolume da lata equivale a \t:\t %.3f\n\n",volume);
		system("pause");		
		system("cls");
		printf("\n\n\n\t\t Deseja realizar mais alguma calculo de volume\t:\t(S/N)");
		scanf("%s",&key);
		system("cls");
	
		while(key!='s' && key!='n'){
			printf("\n\n\n\t\tCodigo invalido \n\n\t\tDigite novamente (S/N)");
			scanf("%s",&key);
			system("cls");
		}
	}
		
	*/


