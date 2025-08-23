#include <stdio.h>

int main(void)
{

    int idade;

    printf("Digite a idade do individuo:\n");
    scanf("%d", &idade);

    if (idade >= 18)
    {

        printf("O individuo eh maior de idade!\n");
    }
    else
    {

            printf("O individuo eh menor de idade!\n");
    }
}