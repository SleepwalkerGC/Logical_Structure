#include <stdio.h>

int main(void)
{

    int numero, aux;

    printf("Digite um numero divisivel por 5:\n");
    scanf("%d", &numero);

    aux = numero % 5;

    if (aux != 0)
    {
        printf("O numero digitado naum eh divisivel por 5.\n");
    }
    else
    {
        printf("O numero digitado eh divisivel por 5.\n");
    }
}
