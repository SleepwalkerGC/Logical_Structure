#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

#define TAM_NOME 50
#define TAM_CPF 12

typedef struct {
    int dia; //4 bytes
    int mes; //4 bytes
    int ano; //4 bytes
} Data; //12 bytes

typedef struct {
    char nome[TAM_NOME]; //50 bytes
    char carteira; //1 byte
    Data datanasc; //12 bytes
    char cpf[TAM_CPF]; //12 bytes (1 extra para o \0 de final de string)
} Cliente; //75 bytes

Cliente  * cadastro;
int total = 0;

int menu() {
    printf("%s\n", "1) Cadastrar");
    printf("%s\n", "2) Buscar");
    printf("%s\n", "3) Listar");
    printf("%s\n", "4) Excluir");
    printf("%s\n", "5) Sair");
    int op;
    scanf("%d", &op);
    return op;
}

//Leitura de strings sem problemas com as quebras de linha / buffer do teclado
void leia(char buffer[], int tamanho) {
    int pos_enter;
    getchar();
    fflush(stdin);
    fgets(buffer, tamanho, stdin);
    pos_enter = strcspn(buffer, "\n");  // Pega a posição da quebra de linha na string
    buffer[pos_enter] = 0;  // Substitui a quebra de linha pelo caractere nulo (note que é o ascii 0 e não '0') / fim de string
    fflush(stdin);
}

void cadastrar() {
    Cliente c;
    printf("Digite o nome:");
    leia(c.nome, TAM_NOME);
    printf("Digite o tipo da carteira de motorista:");
    scanf(" %c", &c.carteira);
    printf("Digite o dia:");
    scanf("%d", &c.datanasc.dia);
    printf("Digite o mês:");
    scanf("%d", &c.datanasc.mes);
    printf("Digite o ano:");
    scanf("%d", &c.datanasc.ano);
    printf("Digite o CPF:");
    leia(c.cpf, TAM_CPF);
    total++;
    cadastro = (Cliente*) realloc(cadastro, total * sizeof(Cliente));
    cadastro[total-1] = c;
}

void listar() {
    for (int i = 0; i < total; i++) {
        mostrarCliente(cadastro[i]);
    }
}

void mostrarCliente(Cliente c) {
    printf("Nome: %s\n", c.nome);
    printf("Carteira: %c\n", c.carteira);
    printf("Data de Nascimento: %d/%d/%d\n", c.datanasc.dia, c.datanasc.mes, c.datanasc.ano);
    printf("CPF: %s\n", c.cpf);
}

// Retorna a posição do cliente no cadastro, dado seu nome
int onde(char nome[]) {
    int reg = -1;
    for (int i = 0; i < total; i++) {
        if (strcmp(nome, cadastro[i].nome) == 0) {
            reg = i;
            break;
        }
    }
    return reg;
}

void buscar() {
    char nome[TAM_NOME];
    printf("Digite o nome a ser buscado:");
    leia(nome, TAM_NOME);
    int reg = onde(nome);
    if (reg > -1) {
        mostrarCliente(cadastro[reg]);
    }
    else {
        printf("Cliente não encontrado.\n");
    }
}

void excluir() {
    char nome[TAM_NOME];
    printf("Digite o nome a ser buscado:");
    leia(nome, TAM_NOME);
    int reg = onde(nome);
    if (reg == -1) {
        printf("Cliente não encontrado.\n");
        return;
    }
    for (int i = reg; i < total -1; i++) {
        cadastro[i] = cadastro[i+1];
    }
    total--;
    cadastro = (Cliente*) realloc(cadastro, total * sizeof(Cliente));
}

int main() {
    setlocale(LC_ALL, "Portuguese");    // Permite acentos nas saídas de texto
    int op = -1;
    do {
        op = menu();
        switch(op) {
            case 1: cadastrar(); break;
            case 2: buscar(); break;
            case 3: listar(); break;
            case 4: excluir(); break;
            case 5: break;
            default: printf("Digite uma opção entre 1 e 5.\n");
        }
    } while(op != 5);
	return 0;
}