#include <stdio.h>
#include <stdlib.h>

int buscaBin(int vetor[], int tamanho, int valor) {
    int esquerda = 0;
    int direita = tamanho - 1;

    while (esquerda <= direita) {
        int mid = esquerda + direita / 2;

        if (vetor[mid] == valor) {
            return mid;
        }

        if (vetor[mid] < valor)
        {
            esquerda = mid + 1;
        }
        else if (vetor[mid] > valor)
        {
            direita = mid - 1;
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

    if (n < 0)
    {
        n = -n;
    }

    int *lista = (int *)malloc(n * sizeof(int));

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

