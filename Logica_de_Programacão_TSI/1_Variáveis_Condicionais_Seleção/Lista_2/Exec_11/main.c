#include <stdio.h>

int main(void)
{
    int ano_fab;
    float valor, valor_transferencia;

    printf("Digite o ano de fabricacao do carro:\n");
    scanf("%d", &ano_fab);

    printf("Digite o valor de tabela do carro:\n");
    scanf("%f", &valor);

    if (ano_fab < 1990)
    {

        valor_transferencia = valor*0.10;
        printf("O valor final da transferencia do veiculo eh de:%.2f\n", valor_transferencia);

    }
     else
    {
        
        valor_transferencia = valor*0.15;
        printf("O valor final da transferencia do veiculo eh de:%.2f\n", valor_transferencia);

    }
}