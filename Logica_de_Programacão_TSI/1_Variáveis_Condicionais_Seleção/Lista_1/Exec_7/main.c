#include <stdio.h>
#include <stdlib.h>

int main()
{
    float saldo;
    printf("Digite o seu saldo:\n");
    scanf("%f", &saldo);

    saldo = saldo * 1.08;

    printf("O seu saldo eh de R$ %.2f reais\n", saldo);

    return 0;
}
