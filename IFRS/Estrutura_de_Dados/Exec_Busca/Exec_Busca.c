#include <stdio.h>
#include <stdlib.h>


int buscaBin(int arr[], int tamanho, int chave) {
    int esquerda = 0;
    int direita = tamanho - 1;

    while (esquerda <= direita) {
        int mid1 = esquerda + (direita - esquerda) / 3;
        int mid2 = direita - (direita - esquerda) / 3;

        if (arr[mid1] == chave) {
            return mid1;
        }
        if (arr[mid2] == chave) {
            return mid2;
        }

        if (chave < arr[mid1]) {
            direita = mid1 - 1;
        } else if (chave > arr[mid2]) {
            esquerda = mid2 + 1;
        } else {
            esquerda = mid1 + 1;
            direita = mid2 - 1;
        }
    }
    return -1;
}

int main() {
    int n;
    int booleano;

    if (scanf("%d %d", &n, &booleano) != 2) {
        return 1;
    }

    if (n < 0) {
        n = -n;
    }

    int *lista = (int *)malloc(n * sizeof(int));
    if (lista == NULL) {
        fprintf(stderr, "Erro de alocação de memória.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &lista[i]) != 1) {
            free(lista);
            return 1;
        }
    }

    int posicao_encontrada = buscaBin(lista, n, booleano);

    if (posicao_encontrada != -1) {
        printf("%d\n", posicao_encontrada);
    } else {
        printf("-1\n");
    }

    free(lista);

    return 0;
}