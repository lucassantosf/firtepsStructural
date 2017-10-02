/*

rodanas

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void){

char helps[30][100],getdica;

strcpy(helps[0],"Famoso rapper de Detroit\0");
/*    
char palavrachave[1][20];

strcpy(palavrachave[0],"----------");

printf("%s",palavrachave[0]);

system("pause");    
*/    

printf(" Dicas (S)  (N)  :");
scanf("%c",&getdica);
if (getdica=='s'){
                  printf("%s",helps[0]);
                  system("pause");
                  }
else if (getdica=='n'){
     printf("valew");
     system("pause");
     }
    
system("pause");    
    
    
}
