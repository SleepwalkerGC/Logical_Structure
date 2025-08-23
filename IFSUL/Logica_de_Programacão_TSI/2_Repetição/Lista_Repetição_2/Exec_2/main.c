#include <stdio.h>

float num;
int aux = 0;

int main(void)
{
    do
    {
        printf("Digite um numero: \n");
        scanf("%f", &num);

        if (num >= 100 && num <= 200)
        {
            aux = aux + 1;
        }

    } while (num != 0);
    printf("Foram digitados %d valores entre 100 e 200.", aux);
}