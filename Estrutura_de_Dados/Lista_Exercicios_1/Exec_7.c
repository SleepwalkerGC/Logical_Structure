#include <stdio.h>

//O  custo  ao  consumidor  de  um  carro  novo  é  a  soma  do  preço  de  fábrica  com  o  percentual  de  lucro  
//do distribuidor e dos impostos aplicados ao preço de fábrica. Faça um programa que recebe o preço de fábrica de um 
//veículo, o percentual de lucro do distribuidor e o percentual de impostos, calcule e mostre:
//a)o valor correspondente ao lucro do distribuidor;
//b)o valor correspondente aos impostos;
//c)o preço final do veículo.


int main()
{
    float valorFabrica, percentualLucro, percentualImposto;

    printf("Digite o valor de fabrica do veiculo:");
    scanf("%f", &valorFabrica);

    printf("Digite o percentual de lucro do distribuidor:");
    scanf("%f", &percentualLucro);

    printf("Digite o percentual de imposto:");
    scanf("%f", &percentualImposto);

    float lucroDistribuidor = valorFabrica*(percentualLucro/100);

    float imposto = valorFabrica*(percentualImposto/100);

    float precoFinal = valorFabrica+lucroDistribuidor+imposto;

    printf("O distribuidor recebera %.2f reais.\n", lucroDistribuidor);

    printf("O montante de %.2f reais correspondem ao valor do imposto.\n", imposto);

    printf("O consumidor pagara %.2f reais.\n", precoFinal);

    return 0;
}