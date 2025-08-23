#include <stdio.h>
#include <string.h>

//Construa um programa que leia dois nomes e diga se ambos têm o mesmo tamanho. Caso não tenham, diga o tamanho de cada um deles

int main ()
{

    char nome1[50], nome2[50];

    printf("Digite o primeiro nome:\n");
    scanf("%49[^\n]s", &nome1);

    fflush(stdin);

    printf("Digite o segundo nome:\n");
    scanf("%49[^\n]s", &nome2);   

    int tam = strlen(nome1);
    int tam2 = strlen(nome2);

    if (tam == tam2)
    {
        printf("Os nomes possuem o mesmo tamanho, de %d caracteres.", tam);
    }
    else
    {
        printf("O primeiro nome digitado possui %d caracteres e o segundo %d caracteres.", tam, tam2);
    }

    return 0;
}