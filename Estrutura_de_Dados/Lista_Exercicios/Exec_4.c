#include <stdio.h>
#include <math.h>

//Faça um programa que calcule e mostre a área de um círculo. Sabe-se que: Área = π * R2.

int main(){
    float raio, area;
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    area = M_PI * pow(raio, 2);
    printf("A area do circulo e: %.2f\n", area);
    return 0;
}