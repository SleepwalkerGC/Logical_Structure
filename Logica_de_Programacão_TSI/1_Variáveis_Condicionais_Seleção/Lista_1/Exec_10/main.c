#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notaA , notaB;

    printf("Digite a sua primeira nota:\n");
    scanf("%f", &notaA);

    printf("Digite a sua segunda nota:\n");
    scanf("%f", &notaB);

    float media = (notaA + notaB)/2;

    printf("Sua media eh: %.2f \n", media);

    return 0;
}