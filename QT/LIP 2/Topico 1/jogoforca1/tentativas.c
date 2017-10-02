/*tentativas

        if (conterro==0){
                    printf("------------                        \n");
                    printf("| |        |                        \n");
                    printf("| |        O                        \n");
                    printf("| |      _ | _                      \n");
                    printf("| |        |                        \n");
                    printf("| |       / \\                       \n");
                    printf("| |                                 \n");
                    printf("| |                                 \n");
}
    if (conterro==1){
                    printf("------------                        \n");
                    printf("| |        |                        \n");
                    printf("| |        O                        \n");
                    printf("| |      _ | _                      \n");
                    printf("| |        |                        \n");
                    printf("| |       /                         \n");
                    printf("| |                                 \n");
                    printf("| |                                 \n");
}                
    if (conterro==2){
                    printf("------------                        \n");
                    printf("| |        |                        \n");
                    printf("| |        O                        \n");
                    printf("| |      _ | _                      \n");
                    printf("| |        |                        \n");
                    printf("| |                              \n");
                    printf("| |                                 \n");
                    printf("| |                                 \n");
}                
    if (conterro==3){
                    printf("------------                        \n");
                    printf("| |        |                        \n");
                    printf("| |        O                        \n");
                    printf("| |      _ |                       \n");
                    printf("| |        |                        \n");
                    printf("| |                                 \n");
                    printf("| |                                 \n");
                    printf("| |                                 \n");
}
    if (conterro==4){
                    printf("------------                        \n");
                    printf("| |        |                        \n");
                    printf("| |        O                        \n");
                    printf("| |        |                        \n");
                    printf("| |        |                        \n");
                    printf("| |                                 \n");
                    printf("| |                                 \n");
                    printf("| |                                 \n");
}    
    if(conterro==5){
                    printf("------------                        \n");
                    printf("| |        |                        \n");
                    printf("| |                                 \n");
                    printf("| |                                 \n");
                    printf("| |                                 \n");
                    printf("| |                                 \n");
                    printf("| |                                 \n");
                    printf("| |                                 \n");
}
        system("pause") ;
    
    
    if ( palpite[0] == letra1[0] ){
                                                       printf(" E ");
                                                       
                                                       
                               }
                               else {
                                    printf (" _ ");
                                    vidas = vidas - 1;
                               }
                               if ( palpite[0] == letra1[1] ){
                                                       printf(" M ");
                                                       
                                                                                      
                               }
                               else {
                                    printf (" _ ");
                                    vidas = vidas - 1;
                               }
                               if ( palpite[0] == letra1[2] ){
                                                       printf(" I ");
                                                       
                                                       
                               }
                               else {
                                    printf (" _ ");
                                    vidas = vidas - 1;
                               }
                               if ( palpite[0] == letra1[3] ){
                                                       printf(" N ");
                                                       
                                                       
                               }
                               else {
                                    printf (" _ ");
                                    vidas = vidas - 1;
                               }
                               if ( palpite[0] == letra1[4] ){
                                                       printf(" E ");
                                                       
                                                       
                               }
                               else {
                                    printf (" _ ");
                                    vidas = vidas - 1;
                               }
                               if ( palpite[0] == letra1[5] ){
                                                       printf(" M ");
                                                       
                                                       
                               }
                               else {
                                    printf (" _ ");
                                    vidas = vidas - 1;
                               }
    
    
    
    
    
    
    ------------------------------------------------------------------
    
    
    printf("\n\nDigite alguma letra : \n");
                               scanf("%s",&palpite[0]);      
                               if ( palpite[0] == letra1[0] ){
                                                       printf(" E ");
                                                       
                                                       
                               }
                               else {
                                    printf (" _ ");
                                    vidas = vidas - 1;
                               }
                               if ( palpite[0] == letra1[1] ){
                                                       printf(" M ");
                                                       
                                                                                      
                               }
                               else {
                                    printf (" _ ");
                                    vidas = vidas - 1;
                               }
                               if ( palpite[0] == letra1[2] ){
                                                       printf(" I ");
                                                       
                                                       
                               }
                               else {
                                    printf (" _ ");
                                    vidas = vidas - 1;
                               }
                               if ( palpite[0] == letra1[3] ){
                                                       printf(" N ");
                                                       
                                                       
                               }
                               else {
                                    printf (" _ ");
                                    vidas = vidas - 1;
                               }
                               if ( palpite[0] == letra1[4] ){
                                                       printf(" E ");
                                                       
                                                       
                               }
                               else {
                                    printf (" _ ");
                                    vidas = vidas - 1;
                               }
                               if ( palpite[0] == letra1[5] ){
                                                       printf(" M ");
                                                       
                                                       
                               }
                               else {
                                    printf (" _ ");
                                    vidas = vidas - 1;
                               }
    
    
    
    
    -------------------------------------------------------------------
    letra1[0]="E";
    letra1[1]="M";
    letra1[2]="I";
    letra1[3]="N";
    letra1[4]="E";
    letra1[5]="M";
    
    ____________________________________________________________________
    
    
    /*  esquemas para usar p/ salvar as palavras  de forma simplificada*/
/*    
char word[3][2][50];

strcpy(word[0][0],"eminem");


printf("%c",word[0][0][0]);

system("pause");
-------------------------------------------------------------------------
printf("%s",helps[0]);
  -------------------------------------------------------------------------
  
strcpy(word[0][0],"eminem");
strcpy(word[0][1],"hiphop");
strcpy(word[1][0],"cinema");
strcpy(word[1][1],"aventura");
strcpy(word[2][0],"iracema");
strcpy(word[2][1],"dom\0casmurro");
*//*
int main(void)

{
char senha1[21],senha2[21],deposito[26]; //(1)

system("clear");//(2)

printf("%s%s\n", "Verificador de senhas em C.",

"Programa que compara dois vetores de caracteres\n");

printf("Digite a primeira expressão (até 20 caracteres):\n");

fgets(deposito, sizeof(deposito), stdin);

sscanf(deposito, "%s", &amp;senha1);

printf("Digite a segunda expressão (até 20 caracteres):\n");

fgets(deposito, sizeof(deposito), stdin);

sscanf(deposito, "%s", &amp;senha2);

if (strcmp (senha1,senha2) == 0 ) //(3)

{

printf("As senhas conferem\n");

}

else

{

printf("As senhas não conferem\n");

}

}
*//*
#include <stdio.h>

#include <time.h>

#include <string.h>

 
int main(void)

{

 

  time_t inicio, fim;

  char nome[51];

 

  inicio= time(NULL);

  printf("Digite seu nome: ");

  fgets(nome, 51, stdin);

  fim= time(NULL);

 

  nome[strlen(nome)-1]= '';

 

  printf("\n%s, voce demorou %.2f segundos para digitar seu nome.\n", nome, difftime(inicio,fim) * (-1));

 

  return 0;

}

*/
#include <stdio.h>
int main(int argc, char *argv[])
{
    FILE *f = fopen("teste.txt", "w");
    int i;
for (i=1; i<=10; i++)
        fprintf(f, "%d\n", i);
    fclose(f);
}
