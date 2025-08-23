#include <stdio.h>
#include <stdlib.h>

typedef struct Pessoa {
    char nome[100];
    int idade;
} Pessoa;

Pessoa * cadastro;
int total = 0;

void listar() {
    for (int i = 0; i < total; i++) {
        printf("Nome: %s\nIdade: %d\n", cadastro[i].nome, cadastro[i].idade);
    }
}

void cadastrar() {
    total++;
    cadastro = realloc(cadastro, total * sizeof(Pessoa));
    printf("Nome: ");
    //espaço antes para consumir o ENTER que ficou no buffer
    //[^\n] significa 'leia qualquer caractere menos ENTER'
    scanf(" %[^\n]", &cadastro[total-1].nome);
    printf("Idade: ");
    scanf("%d", &cadastro[total-1].idade);
}

void salvar() {
    FILE * arq = fopen("aula.txt", "wt");
    for (int i = 0; i < total; i++) {
        fprintf(arq, "%s\n%d\n", cadastro[i].nome, cadastro[i].idade);
    }
    fclose(arq);
}

void carregar() {
    FILE * arq = fopen("aula.txt", "rt");
    if (arq == NULL) {
        printf("Arquivo de cadastro inexistente. Sera criado ao sair.");
    }
    else {
        while (!feof(arq)) {
            total++;
            cadastro = realloc(cadastro, total * sizeof(Pessoa));
            fscanf(arq, "%[^\n]\n%d\n", &cadastro[total-1].nome, &cadastro[total-1].idade);
        }
    }

    fclose(arq);
}

int main() {

    int op;
    //cadastro = malloc(0);
    carregar();

    do {
        printf("1 - Listar\n2 - Cadastrar\n3 - Sair\n");
        scanf("%d", &op);
        switch(op) {
            case 1: listar(); break;
            case 2: cadastrar(); break;
            case 3: printf("Saindo..."); salvar(); break;
            default: printf("Escolha uma opcao de a 1 a 3\n");
        }

    } while(op != 3);


    return 0;
}