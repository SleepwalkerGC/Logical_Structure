#include <stdio.h>


int main()
{
   int aux;

   printf("Digite um numero inteiro:");
   scanf("%d", &aux);

   if (aux < 100)
   {
    
    printf("O numero digitado eh menor que 100!");
   
   }else if(aux == 100){

    printf("O numero digitado eh 100!");

   }else{

    printf("O numero digitado eh maior que 100!");

   }
    
    return 0;
}