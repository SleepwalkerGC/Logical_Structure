#include <stdio.h>


int main()
{
    float num, terco;

    printf("Digite um numero real:");
    scanf("%f", &num);

    terco = num/3;

    printf("A terca parte do numero digitado eh: %.2f", terco);
    
    return 0;
}