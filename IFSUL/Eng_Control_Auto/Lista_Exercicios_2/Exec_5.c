#include <stdio.h>

//Faça um programa para determinar se um dado número N, recebido através do teclado, é POSITIVO, NEGATIVO ou NULO

int main ()
{
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("O numero e positivo\n");
    }
    else if (n < 0)
    {
        printf("O numero e negativo\n");
    }
    else
    {
        printf("O numero e nulo\n");
    }
    
    return 0;
}