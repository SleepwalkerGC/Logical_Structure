#include <stdio.h>
#include <math.h>

//Faça um programa que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipotenusa.
//(h2=c12+c22).

int main()
{
    float ladoB, ladoC, hipotenusa;

    printf("Digite o lado B do triangulo:");
    scanf("%f", &ladoB);

    printf("Digite o lado C do triangulo:");
    scanf("%f", &ladoC);

    hipotenusa = sqrt(pow(ladoB, 2) + pow(ladoC, 2));

    printf("A hipotenusa eh igual a %.2f", hipotenusa);

    return 0;
}
