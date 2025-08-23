#include <stdio.h>
#include <string.h>

//Escreva um programa que leia um nome e informe o tamanho deste nome, classificando-o como “nome curto”,
//se possuir menos que 10 caracteres.

int main(){

    char nome[100];  
    
    printf("Digite um nome: ");
    scanf("%s", nome);

    strlen(nome) < 10 ? printf("Nome curto\n") : printf("Nome longo\n");

    return 0;
}