/*
Programa JogoForca.c    
Desenvolvido por Lucas Ferreira dos Santos

Desenvolva um sistema (jogo) que permita ao usuário descobrir a palavra secreta através de dicas, conforme segue:

1) Será permitido ao usuário consultar 5 dicas para cada uma das palavras a ser descoberta;

2) Cada erro ou cada dica elimina um elemento do corpo do boneco da forca (cabeça e tronco, braço 1 e 2, perna 1 e 2);

3) As palavras secretas e dicas das palavras devem estar no corpo do programa.

4) Deve ser cadastrado duas palavras para cada uma das três categorias (música, filme e livro).

5) Salve num arquivo o nome do usuário, o tempo gasto, as penalidades (0,1,2,3,4,5).

Obs.:
Entregue o código fonte em .c (c source file);
A identação correta é obrigatória. 

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
    
    FILE *Cadastro;
    system("chcp 28591");
    system("cls");
    int esccat,r1,vidas=5,rodadas;
    char name[20],letra1[7],letra2[7],palpite[1];
    
    letra1[0]='e';
    letra1[1]='m';
    letra1[2]='i';
    letra1[3]='n';
    letra1[4]='e';
    letra1[5]='m';
    
    letra2[0]='h';
    letra2[1]='i';
    letra2[2]='p';
    letra2[3]='h';
    letra2[4]='o';
    letra2[5]='p';
    
    
    
     
    
    printf("\n\n\n\n\n\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    printf("\n\tJogo da Forca ");
    printf("\nXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n\n\n\n\n\n\n"); 
    
    
    system("pause") ;
    system("cls")   ;
    
    Cadastro = fopen ("Nome.txt","a");
    fclose(Cadastro);
    Cadastro = fopen ("Nome.txt","w");
    
    printf("\n\n\n\n\n\n\tDigite seu nome para jogar :: ");
    printf("\n\n\n\n\n\n\t::::::::::::::>>>>>>>>>>>>>>>");
    
    fflush(stdin);
    fgets(name,20,stdin);
    fprintf(Cadastro,"%s",name);
    fclose(Cadastro);
        
    system("pause") ;
    system("cls")   ;
    
    printf("\n\n\n\n\n\n\tNome cadastrado !\n\n\n\n\n\n\n\n\n\n");
    
    system("pause") ;
    system("cls")   ;
    
    printf("\n\n\n\n\n\n\t Escolha uma categoria  :");
    printf("\n\t1.Musica");
    printf("\n\t2.Filme");
    printf("\n\t3.Livro\n\t");
    scanf("%i",&esccat);
    
    while (esccat>=4 || esccat<=0){
          system("cls")   ;
          printf("\n\n\n\n\n\n\tCodigo incorreto para categoria digite corretamente ,");
          printf("\n\t1.Musica");
          printf("\n\t2.Filme");
          printf("\n\t3.Livro\n\t");
          scanf("%i",&esccat);
    }
    system("cls");
    
    printf("\n\nDigite alguma letra : \n");
    scanf("%s",&palpite[0]);
    
    switch(esccat)
    {
                  case 1 :
                       
                       system("cls");
                       r1 = rand ();
                       if (r1 < RAND_MAX /6)
                           {   
                               
                                     
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
                           }
                       
                       
                       
                       
                       else if (r1 < RAND_MAX * 2 /6) /* IF RAMDOMICO  */
                           {   
                               printf (" SEecond %c  \n\n\n\n\n\n\n\n\n\n",letra2[0]);
                               
                           }   
                       
        printf("TESTE");
        system("pause");               
                       
}       /* fim do laço switch case*/                

    if (vidas==5){
                    printf("\n\n\n\n------------                        \n");
                    printf("| |        |                        \n");
                    printf("| |        O                        \n");
                    printf("| |      _ | _                      \n");
                    printf("| |        |                        \n");
                    printf("| |       / \\                       \n");
                    printf("| |                                 \n");
                    printf("| |                                 \n");
}
    if (vidas==4){
                    printf("\n\n\n\n------------                        \n");
                    printf("| |        |                        \n");
                    printf("| |        O                        \n");
                    printf("| |      _ | _                      \n");
                    printf("| |        |                        \n");
                    printf("| |       /                         \n");
                    printf("| |                                 \n");
                    printf("| |                                 \n");
}                
    if (vidas==3){
                    printf("\n\n\n\n------------                        \n");
                    printf("| |        |                        \n");
                    printf("| |        O                        \n");
                    printf("| |      _ | _                      \n");
                    printf("| |        |                        \n");
                    printf("| |                              \n");
                    printf("| |                                 \n");
                    printf("| |                                 \n");
}                
    if (vidas==2){
                    printf("\n\n\n\n------------                        \n");
                    printf("| |        |                        \n");
                    printf("| |        O                        \n");
                    printf("| |      _ |                       \n");
                    printf("| |        |                        \n");
                    printf("| |                                 \n");
                    printf("| |                                 \n");
                    printf("| |                                 \n");
}
    if (vidas==1){
                    printf("\n\n\n\n------------                        \n");
                    printf("| |        |                        \n");
                    printf("| |        O                        \n");
                    printf("| |        |                        \n");
                    printf("| |        |                        \n");
                    printf("| |                                 \n");
                    printf("| |                                 \n");
                    printf("| |                                 \n");
}    
    if(vidas==0){
                    printf("\n\n\n\n------------                        \n");
                    printf("| |        |                        \n");
                    printf("| |                                 \n");
                    printf("| |                                 \n");
                    printf("| |                                 \n");
                    printf("| |                                 \n");
                    printf("| |                                 \n");
                    printf("| |                                 \n");
}
    
    
      
    system("pause") ;
    
/*Fim do laço for*/
    
    
   
    
    return 0;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    
}
