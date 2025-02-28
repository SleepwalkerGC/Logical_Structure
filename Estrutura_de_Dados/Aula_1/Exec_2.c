#include <stdio.h>

int main (){
    
    int num;
    float real;
    char letra;
    
    printf("Digite um número inteiro: ");
    scanf("%i", &num);
    printf("Digite um número real e um caractere: ");
    scanf("%f%c", &real, &letra);

    printf("%15s%20i \n","Inteiro: ", num);
    printf("%15s%20.2f \n","Valor real: ", real);
    printf("%15s%20c \n","Caractere: ", letra);
    
    return 0;
}