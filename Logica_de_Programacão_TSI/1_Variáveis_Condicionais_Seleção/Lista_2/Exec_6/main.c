#include <stdio.h>

int main(void)
{

    int ano_nasce, ano_atual = 2022;

    printf("Digite o ano de nascimento do individuo:\n");
    scanf("%d", &ano_nasce);

    if (ano_nasce > 2022)
    {

        printf("Parabens, voce veio do futuro!\n");
    }
    else
    {
        int idade = ano_atual - ano_nasce;

            printf("O individuo possui %d anos.\n", idade);
    }
}