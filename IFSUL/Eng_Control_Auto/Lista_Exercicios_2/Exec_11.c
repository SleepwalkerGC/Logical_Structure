//Faça um programa que receba três valores, A, B e C, analise estes valores e informe ao usuário se estes podem ser os ladosde um triângulo. 
//O ABC será um triângulo se cada um dos lados for menor que a soma dos outros dois. Obs: Seu algoritmo não deve permitir entrada de valores
//inválidos para as medidas candidatas a lados do triângulo.

#include <stdio.h>


int main()
{

    float a, b, c;
    printf("Digite o valor do lado A: ");
    scanf("%f", &a);
    printf("Digite o valor do lado B: ");
    scanf("%f", &b);
    printf("Digite o valor do lado C: ");
    scanf("%f", &c);

    if (a + b > c && a + c > b && b + c > a)
    {
        printf("Os lados %.2f, %.2f e %.2f formam um triangulo.\n", a, b, c);
    }
    else if (a <= 0 || b <= 0 || c <= 0)
    {
        printf("Valores invalidos para os lados do triangulo.\n");
    }
    else
    {
        printf("Os lados %.2f, %.2f e %.2f nao formam um triangulo.\n", a, b, c);
    }
    
    return 0;
}
