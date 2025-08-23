//Construa um programa que diga se um dado número N inteiro, recebido através do teclado, é PAR ou ÍMPAR

#include <stdio.h>


int main()
{
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
    {
        printf("O numero %d eh PAR", numero);
    }
    else if (numero % 2 != 0)
    {
        printf("O numero %d eh IMPAR", numero);
    }
    else
    {
        printf("Caractere inválido");
    }
    
    

    return 0;
}
