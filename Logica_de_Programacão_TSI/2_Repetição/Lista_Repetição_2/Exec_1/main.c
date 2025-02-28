#include <stdio.h>

float num;

int main(void)
{
    do
    {
        printf("Digite um numero: \n");
        scanf("%f", &num);

        if (num > 0)
        {
            printf("POSITIVO\n");
        }
        else if (num < 0)
        {
            printf("NEGATIVO\n");
        }
    } while (num != 0);
}