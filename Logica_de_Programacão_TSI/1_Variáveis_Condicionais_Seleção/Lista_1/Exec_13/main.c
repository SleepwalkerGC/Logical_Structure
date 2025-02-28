#include <stdio.h>

int main()
{
   float salario, reajuste;

    printf("Digite o salario atual do trabalhador:");
    scanf("%f", &salario);

    printf("Digite o percentual de reajuste:");
    scanf("%f", &reajuste);

    float novo_salario = salario + (salario * (reajuste/100));

    printf("O salario atual do trabalhador eh de %.2f", novo_salario);

    return 0;
}