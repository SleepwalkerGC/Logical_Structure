#include <stdio.h>
#include <stdlib.h>

int main() {
    char destino[20], origem[20];
    int num_linha;
    scanf("%s %s %d", destino, origem, &num_linha);

    FILE *arquivo_origem;
    FILE *arquivo_destino;
    char buffer_linha[1024];
    int linha_atual = 1;

    arquivo_origem = fopen(origem, "r");
    if (arquivo_origem == NULL) {
        printf("Erro: Nao foi possivel abrir o arquivo de origem '%s'.\n", origem);
        return 1;
    }

    arquivo_destino = fopen(destino, "w");
    if (arquivo_destino == NULL) {
        printf("Erro: Nao foi possivel criar o arquivo de destino '%s'.\n", destino);
        fclose(arquivo_origem);
        return 1;
    }

    while (fgets(buffer_linha, sizeof(buffer_linha), arquivo_origem) != NULL) {
        if (linha_atual == num_linha) {
            fputs(buffer_linha, arquivo_destino);
            break;
        }
        linha_atual++;
    }
    fclose(arquivo_origem);
    fclose(arquivo_destino);

    return 0;
}