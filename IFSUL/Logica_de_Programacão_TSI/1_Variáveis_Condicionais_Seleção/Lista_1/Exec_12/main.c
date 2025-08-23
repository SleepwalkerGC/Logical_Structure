#include <stdio.h>

int main()
{
   float valor, tempo, taxa;

    printf("Digite o valor da parcela:");
    scanf("%f", &valor);

    printf("Digite a quantos dias a parcela esta sem vencer o sorteio de boletos:");
    scanf("%f", &tempo);

    printf("Digite a taxa cobrada ao dia de atraso:");
    scanf("%f", &taxa);

    float valor_atual = valor + (valor * (taxa/100) * tempo);

    printf("O valor atual da parcela eh de %.2f", valor_atual);

    return 0;
}
