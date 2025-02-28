#include <stdio.h>
#include <stdlib.h>
int main()
{
    int j1_parou = 0, j2_parou = 0;
    int pontos_j1 = 0, pontos_j2 = 0;
    char jogada;
    int vez = 1;

    do
    {
        scanf("%c", &jogada);
        fflush(stdin);
        switch (jogada)
        {
        case ' ':
            continue;
        case 'A':
            if (vez == 1)
                pontos_j1 += 1;
            else
                pontos_j2 += 1;
            break;
        case '2':
            if (vez == 1)
                pontos_j1 += 2;
            else
                pontos_j2 += 2;
            break;
        case '3':
            if (vez == 1)
                pontos_j1 += 3;
            else
                pontos_j2 += 3;
            break;
        case '4':
            if (vez == 1)
                pontos_j1 += 4;
            else
                pontos_j2 += 4;
            break;
        case '5':
            if (vez == 1)
                pontos_j1 += 5;
            else
                pontos_j2 += 5;
            break;
        case '6':
            if (vez == 1)
                pontos_j1 += 6;
            else
                pontos_j2 += 6;
            break;
        case '7':
            if (vez == 1)
                pontos_j1 += 7;
            else
                pontos_j2 += 7;
            break;
        case '8':
            if (vez == 1)
                pontos_j1 += 8;
            else
                pontos_j2 += 8;
            break;
        case '9':
            if (vez == 1)
                pontos_j1 += 9;
            else
                pontos_j2 += 9;
            break;
        case 'D':
            if (vez == 1)
                pontos_j1 += 10;
            else
                pontos_j2 += 10;
            break;
        case 'J':
            if (vez == 1)
                pontos_j1 += 11;
            else
                pontos_j2 += 11;
            break;
        case 'Q':
            if (vez == 1)
                pontos_j1 += 12;
            else
                pontos_j2 += 12;
            break;
        case 'K':
            if (vez == 1)
                pontos_j1 += 13;
            else
                pontos_j2 += 13;
            break;
        case 'S':
            if (vez == 1)
            {
                j1_parou = 1;
            }
            else
            {
                j2_parou = 1;
            }
            break;
        }
        if (vez == 1 && !j2_parou)
        {
            vez = 2;
        }
        else
        {
            if (vez == 2 && !j1_parou)
            {
                vez = 1;
            }
        }
    } while (!j1_parou || !j2_parou);
    // printf("JOGADOR1 %d, JOGADOR2 %d\n", pontos_j1, pontos_j2);
    if (pontos_j1 > 21)
    {
        // assumindo que J1 passou de 21
        if (pontos_j2 <= 21)
        {
            printf("JOGADOR 2 VENCEU\n");
        }
        else
        {
            printf("EMPATE\n");
        }
    }
    else
    {
        // assumindo que J1 nao passou de 21
        if (pontos_j2 > 21)
        {
            printf("JOGADOR 1 VENCEU\n");
        }
        else
        {
            // se ambos estao com 21 ou menos
            if (pontos_j1 == pontos_j2)
            {
                printf("EMPATE\n");
            }
            else
            {
                if (pontos_j1 > pontos_j2)
                {
                    printf("JOGADOR 1 VENCEU\n");
                }
                else
                {
                    printf("JOGADOR 2 VENCEU\n");
                }
            }
        }
    }
    return 0;
}