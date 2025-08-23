#include <stdio.h>

int main(void)
{

    float n1, n2;

    printf("Digite um numero:\n");
    scanf("%f", &n1);

    printf("Digite outro numero:\n");
    scanf("%f", &n2);

    if (n1 != n2)

    {

        printf("Os numeros digitados foram respectivamente:%.2f e %.2f\n", n1, n2);

    }
    else
    {

        printf("Voce digitou o mesmo numero duas vezes, para de subverter o sistema\n");

    }
}