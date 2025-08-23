#include <stdio.h>

int main(void)
{

    int numero, aux;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &numero);

    aux = numero % 2;

    if (aux != 0)
    {
        printf("O numero digitado eh impar.\n");
    }
    else
    {
        printf("O numero digitado eh par.\n");
    }
}