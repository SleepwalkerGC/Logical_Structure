

#include <stdio.h>

int main() {

    char nome [30];

    printf("Digite um nome: ");
    scanf("%29[^\n]s", &nome); 
  //gets(nome);
  //fgets(nome, 30, stdin);

    puts(nome);    
    return 0;
}

//O código acima é um programa que lê uma string de até 29 caracteres do teclado e imprime a string lida na tela.
//scanf("%29[^\n]s", &nome); é uma função que lê uma string de até 29 caracteres do teclado e armazena na variável nome.
//puts(nome); é uma função que imprime a string lida na tela.