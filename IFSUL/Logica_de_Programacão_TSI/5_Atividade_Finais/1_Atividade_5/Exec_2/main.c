#include <stdio.h>
main()
{
    int novo, v1 = 0, v2 = 0, v3 = 0, v4 = 0, v5 = 0;
    int deu_ruim = 0;
    float media_movel;
    do
    {
        scanf("%i", &novo); // le o valor
        // propaga de maneira a descartar o ultimo lido
        v5 = v4;
        v4 = v3;
        v3 = v2;
        v2 = v1;
        v1 = novo;
        media_movel = (v1 + v2 + v3 + v4 + v5) / 5.0;
        if (media_movel > 1000)
            deu_ruim = 1;
    } while (novo >= 0);
    if (deu_ruim == 1)
    {
        printf("DEU RUIM\n");
    }
    else
    {
        printf("TURNO TRANQUILO\n");
    }
}