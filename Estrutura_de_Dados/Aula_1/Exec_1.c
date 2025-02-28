#include <stdio.h>

int main (){
    
    int num = 20;
    float real = 2.2;
    char letra = 'A';
    
    printf("%15s%20i \n","Inteiro: ", num);
    printf("%15s%20.2f \n","Valor real: ", real);
    printf("%15s%20c \n","Caractere: ", letra);
    
    return 0;
}