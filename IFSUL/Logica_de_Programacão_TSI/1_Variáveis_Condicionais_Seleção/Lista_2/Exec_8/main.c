#include <stdio.h>

int main(void)
{

    int senha;

    printf("Digite sua senha:\n");
    scanf("%d", &senha);

    if (senha == 1234)
    {

        printf("ACESSO PERMITIDO\n");
    }
    else
    {

            printf("ACESSO NEGADO!\n");
    }
}