#include <stdio.h>

int main(void)
{

    float n1, n2, diferenca;

    printf("Digite um numero:\n");
    scanf("%f", &n1);

    printf("Digite outro numero:\n");
    scanf("%f", &n2);

    if (n1 > n2)

    {
        diferenca = n1 - n2;

        printf("N1 eh maior que N2, e sua diferenca eh de:%.2f\n", diferenca);
    }
    else if (n2 > n1)

    {
        diferenca = n2 - n1;

        printf("N2 eh maior que N1, e sua diferença eh de:%.2f\n", diferenca);
    }
    else
    {

        printf("Voce digitou o mesmo numero duas vezes, para de subverter o sistema\n");
    }
}