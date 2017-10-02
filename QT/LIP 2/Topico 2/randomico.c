/*
Programa Randomico.c
Desenvolvido por Lucas Ferreira dos Santos
*/

#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int r,i=0;
    printf(" Dado Digital \n\n",r);
    while (i<=6){
          r = rand ();
          
          if (r < RAND_MAX /6)
              {printf (" Valor 1 \n\n ");}
          else if (r < RAND_MAX * 2 /6)
              {printf (" Valor 2 \n\n ");}   
          else if (r < RAND_MAX * 3 /6)
              {printf (" Valor 3 \n\n ");} 
          else if (r < RAND_MAX * 4 /6)
              {printf (" Valor 4 \n\n ");}
          else if (r < RAND_MAX * 5 /6)
              {printf (" Valor 5 \n\n ");} 
          else  
          
              {printf (" Valor 6 \n\n ");} 
          i++;
    }
    system("pause");
    return 0;
    
}         
