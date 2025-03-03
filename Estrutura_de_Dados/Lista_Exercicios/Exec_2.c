#include <stdio.h>
#include <stdlib.h>

//Faça um programa que recebe o nome de um funcionário, seu salário, e o percentual de aumento que ele irá
//receber. Calcule e mostre o nome do funcionário, o valor do aumento e o novo salário



int main (){
    char nomeFuncionario [50];
    float salario, aumento;

    printf("Digite o nome do funcionario:\n");
    scanf("%s", &nomeFuncionario);

    printf("Digite o salario deste funcionario:\n");
    scanf("%f", &salario);

    printf("Digite o percentual de aumento deste funcionario:\n");
    scanf("%f", &aumento);

    aumento = aumento/100;

    salario = salario + (salario*aumento);

    printf("O novo salario do %s eh de %.2f reais.\n", nomeFuncionario, salario);

    return 0;
}