#include <stdio.h>
#include <math.h>

//Faça um programa que solicite um número positivo e maior que zero, calcule e mostre:
//a) o número digitado ao quadrado;
//b) o número digitado ao cubo;
//c) a raiz quadrada do número digitado;
//d) a raiz cúbica do número digitado.

int main(){

    float num, quadrado, cubo, raiz_quadrada, raiz_cubica;

    do
    {
        printf("Digite um numero positivo e maior que zero: ");
        scanf("%f", &num);

    } while (num <= 0);

    quadrado = pow(num, 2);     //a
    cubo = pow(num, 3);         //b
    raiz_quadrada = sqrt(num);  //c
    raiz_cubica = cbrt(num);    //d

    printf("O numero digitado ao quadrado: %.2f\n", quadrado);
    printf("O numero digitado ao cubo: %.2f\n", cubo);
    printf("A raiz quadrada do numero digitado: %.2f\n", raiz_quadrada);
    printf("A raiz cubica do numero digitado: %.2f\n", raiz_cubica);

    return 0;
}