#include <stdio.h>

int menor = 0, maior = 0, highlander = 0, idade;

int main(void)
{
    do
    {
        printf("Digite uma idade: \n");
        scanf("%d", &idade);

        if (idade >= 0 && idade < 18)
        {
            menor = menor + 1;
        }
        else if (idade >= 18 && idade <= 122)
        {
            maior = maior + 1;
        }
        else if (idade > 122)
        {
            printf("Eita, o ultimo digitado eh um highlander! O que eh imortal... Nao morre no final...\n");
            highlander =   highlander + 1;
        }

    } while (idade >= 0);

    printf("Foram contabilzados %d menores de idade, %d maiores de idade e %d highlander(s).", menor, maior, highlander);
}