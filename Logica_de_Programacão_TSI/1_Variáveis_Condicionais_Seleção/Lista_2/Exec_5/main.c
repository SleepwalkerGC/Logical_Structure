#include <stdio.h>

int main(void)
{

    int numero;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &numero);

    if (numero == 20)
    {
   
        printf("O numero digitado eh 20.\n");
   
    }
    else if (numero > 20)
    {

        printf("O numero digitado eh maior que 20.\n");
   
    }
    else
    {

        printf("O numero digitado eh menor que 20.\n");
    
    }
}