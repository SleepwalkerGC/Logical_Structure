#include <stdio.h>
#include <string.h>

int main() {
    
    char nome1[20], nome2[20];
    int tam;
    printf("Digite um nome: ");
    scanf("%19[^\n]s", nome1);

    strcpy(nome2, nome1);

    tam = strlen(nome1);
    printf("Nome 1: %s\nNome 2: %s", nome1, nome2);
    printf("\nTamanho do nome 1: %d\n", tam);

    return 0;
}