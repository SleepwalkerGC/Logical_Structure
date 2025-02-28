#include <stdio.h>

int main()
{
    int eleitores, voto_valido;

    printf("Digite o numero de eleitores:\n");
    scanf("%d", &eleitores);
    
    printf("Digite o numero de votos validos:\n");
    scanf("%d", &voto_valido);
    
    float percentual_valido, percentual_invalido;

    if (eleitores < voto_valido)
    {
        printf("ELEICAO FRAUDADA!");
    }else{

    percentual_valido = (100 / eleitores) * voto_valido;
    percentual_invalido = 100 - percentual_valido;

printf("O percentual de votos validos eh de: %.2f\n", percentual_valido);
printf("O percentual de votos invalidos eh de: %.2f\n", percentual_invalido);

    }
    
    
    return 0;
}