#include<stdio.h>


//Construa um programa que leia o nome e o sexo de uma pessoa e construa e apresente uma string com o texto 
//“BOM DIA SR. <NOME>” caso o sexo seja masculinho, e “BOM DIA SRA. <NOME>” caso o sexo seja feminino.


int main(){
    char nome[50], sexo;
    printf("Digite o nome: ");
    scanf("%s", nome);
    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);

    if(sexo == 'M'){
        printf("BOM DIA SR. %s\n", nome);
    }else if(sexo == 'F'){
        printf("BOM DIA SRA. %s\n", nome);
    }else{
        printf("Sexo invalido\n");
    }
    return 0;
}