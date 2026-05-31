#include <stdio.h>

int main() {
    int L1, C1, L2, C2;

    printf("Digite o numero de linhas e colunas da Matriz 1: ");
    scanf("%d %d", &L1, &C1);

    int Matriz1[L1][C1];

    printf("Digite os elementos da Matriz 1:\n");
    for (int i = 0; i < L1; i++) {
        for (int j = 0; j < C1; j++) {
            scanf("%d", &Matriz1[i][j]);
        }
    }

    printf("Digite o numero de linhas e colunas da Matriz 2: ");
    scanf("%d %d", &L2, &C2);

    int Matriz2[L2][C2];

    printf("Digite os elementos da Matriz 2:\n");
    for (int i = 0; i < L2; i++) {
        for (int j = 0; j < C2; j++) {
            scanf("%d", &Matriz2[i][j]);
        }
    }

    if (C1 != L2) {
        printf("ERRO\n");
    } else {
        int MatrizResultante[L1][C2];

        for (int i = 0; i < L1; i++) {
            for (int j = 0; j < C2; j++) {
                int soma = 0;
                for (int k = 0; k < C1; k++) {
                    soma = soma + (Matriz1[i][k] * Matriz2[k][j]);
                }
                MatrizResultante[i][j] = soma;
            }
        }
        for (int i = 0; i < L1; i++) {
            for (int j = 0; j < C2; j++) {
                printf("%d ", MatrizResultante[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}