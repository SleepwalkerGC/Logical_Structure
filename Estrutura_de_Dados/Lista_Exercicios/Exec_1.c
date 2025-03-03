#include <stdio.h>

//Faça um programa que receba três notas, calcule e mostre a média aritmética entre elas

int main (){
    
    float nota1, nota2, nota3, media;

    printf("Digite o valor da primeira nota:\n");
    scanf("%f", &nota1);

    printf("Digite o valor da segunda nota:\n");
    scanf("%f", &nota2);

    printf("Digite o valor da terceira nota:\n");
    scanf("%f", &nota3);

    media = (nota1+nota2+nota3)/3;

    printf("Sua media final eh: %.2f", media);

    return 0;
}