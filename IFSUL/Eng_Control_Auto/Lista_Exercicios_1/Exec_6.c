#include <stdio.h>
#include <stdlib.h>

//Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
//a) a idade desta pessoa baseada somente no ano;
//b) quantos anos ela terá em 2050.

int main ()
{
    int anoNascimento, anoAtual;

    printf("Digite o ano de nascimento:");
    scanf("%d", &anoNascimento);

    printf("Digite o ano atual:");
    scanf("%d", &anoAtual);

    int idade = anoAtual - anoNascimento;

    int idade2050 = 2050 - anoNascimento;

    printf("Esta pessoa tem %d anos atualmente, e tera %d anos em 2050.", idade, idade2050);


    return 0;
}