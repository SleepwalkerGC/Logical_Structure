#include <stdio.h>

int main(void)

{

    float h, imc;
    char sexo;

    printf("Digite a altura do maluco(a):\n");
    scanf("%f", &h);

    printf("Digite M para sexo masculino e F para feminino:\n");
    fflush(stdin); //limpa buffer do teclado
    sexo = getchar();

    switch (sexo)
    {
    case 'M':

        imc = (72.7 * h) - 58;
        printf("O imc do maluco solicitado eh de %.2f\n", imc);

        break;

    case 'F':

        imc = (62.1 * h) - 44.7;
        printf("O imc da maluca solicitado eh de %.2f\n", imc);

        break;
        
    default:

        printf("Voce digitou um caractere invalido!\n");

        break;
    }
}