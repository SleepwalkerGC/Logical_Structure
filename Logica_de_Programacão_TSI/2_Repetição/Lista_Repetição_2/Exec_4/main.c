#include <stdio.h>

int main(void)
{

    int senha;
    do
    {
        printf("Digite sua senha:\n");
        scanf("%d", &senha);

        if (senha == 2008)
        {

            printf("ACESSO PERMITIDO\n");
        }
        else
        {

            printf("SENHA INVALIDA\n");
        }
    } while (senha != 2008);
}