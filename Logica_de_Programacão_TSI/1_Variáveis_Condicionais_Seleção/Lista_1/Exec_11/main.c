#include <stdio.h>

int main()
{
    float hora_aula, Qtd_horas, INSS, salario_bruto, remuneracao_liquida, desconto_inss;

    printf("Digite o valor da hora-aula do professor:\n");
    scanf("%f", &hora_aula);

    printf("Digite a quantidade de horas trabalhadas:\n");
    scanf("%f", &Qtd_horas);

    printf("Digite o percentual de desconto do INSS:\n");
    scanf("%f", &INSS);

    salario_bruto = hora_aula * Qtd_horas;
    desconto_inss = salario_bruto * (INSS/100);
    remuneracao_liquida = salario_bruto - desconto_inss;
    
    printf("O salario liquido do professor eh %.2f:\n", remuneracao_liquida);


    return 0;
}