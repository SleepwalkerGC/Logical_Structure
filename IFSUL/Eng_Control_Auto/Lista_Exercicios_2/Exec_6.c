#include <stdio.h>
#include <math.h>
//Faça um programa que leia um número e imprima a raiz quadrada do número, caso ele seja positivo ou igual a zero; e o quadrado do número, caso ele seja negativo.

int main(){
    
    float num;

    printf("Digite um numero: ");
    scanf("%f", &num);

    if(num >= 0){
        printf("Raiz quadrada: %.2f\n", sqrt(num));
    }else{
        printf("Quadrado: %.2f\n", pow(num, 2));

    }
    return 0;
}