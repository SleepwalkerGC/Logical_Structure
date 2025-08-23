#include <stdio.h>
#include <string.h>

int main() {
    
    char nome1[20], nome2[20];
    int tam, tam2;
    printf("Digite um nome: ");
    fflush(stdin);
    scanf("%19[^\n]s", nome1);

    printf("Digite outro nome: ");
    fflush(stdin);
    scanf("%19[^\n]s", nome2);

    tam = strlen(nome1);
    tam2 = strlen(nome2);
    
    printf("Nome 1: %s\nNome 2: %s", nome1, nome2);
    printf("\nTamanho do nome 1: %d\nTamanho do nome 2: %d\n", tam, tam2);
    
    strcmp(nome1, nome2) == 0 ? printf("Os nomes sao iguais\n\n") : printf("Os nomes sao diferentes\n\n");

    strcat(nome1, " ");
    strcat(nome1, nome2);
    printf("Nome 1 concatenado com Nome 2: %s\n", nome1);

    puts(nome2);

    return 0;
}