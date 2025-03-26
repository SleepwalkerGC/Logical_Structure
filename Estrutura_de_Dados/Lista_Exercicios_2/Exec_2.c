#include <stdio.h>
#include <string.h>

//Construa um programa que leia dois nomes e diga se ambos têm o mesmo tamanho. Caso não tenham, diga o tamanho de cada um deles.

int main(){

    char nome[100], nome2[100];  
    
    printf("Digite um nome: ");
    scanf("%s", nome);

    printf("Digite outro nome: ");
    scanf("%s", nome2);

    if(strlen(nome) == strlen(nome2)){
        printf("Os nomes tem o mesmo tamanho\n");
    }else{
        printf("O primeiro nome tem %d caracteres e o segundo tem %d caracteres\n", strlen(nome), strlen(nome2));
    }

    return 0;
}