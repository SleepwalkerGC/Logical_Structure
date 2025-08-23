//Construa um programa que leia o nome e o sexo de uma pessoa e construa e apresente uma string com o 
//texto “BOM DIA SR. <NOME>” caso o sexo seja masculinho, e “BOM DIA SRA. <NOME>” caso o sexo seja feminino.
#include <stdio.h>


int main()
{
    char nome[50], sexo;

    
    printf("Digite um nome:");
    scanf("%49[^\n]s", &nome);

    fflush(stdin);

    printf("Digite M para masculino ou F para feminino:");
    scanf( "%c", &sexo);

    if (sexo == 'M' || sexo == 'm')
    {
        printf("BOM DIA SR. %s", nome);
    }
    else if (sexo == 'F' || sexo == 'f')
    {
        printf("BOM DIA SRA. %s", nome);
    }
    else
    {
        printf("Caractere inválido");
    }
    return 0;
}
