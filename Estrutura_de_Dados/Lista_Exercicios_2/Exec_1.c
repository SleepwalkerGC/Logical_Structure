#include <stdio.h>

//Escreva um programa que leia um nome e informe o tamanho deste nome, classificando-o como “nome curto”,
//se possuir menos que 10 caracteres.

int main(){

    char nome[100];
    int i = 0;  
    
    printf("Digite um nome: ");
    scanf("%s", nome);

    while(nome[i] != '\0'){
        i++;
    }

    if(i < 10){
        printf("Nome curto\n");
    }else{
        printf("Nome longo\n");
    }




    return 0;
}