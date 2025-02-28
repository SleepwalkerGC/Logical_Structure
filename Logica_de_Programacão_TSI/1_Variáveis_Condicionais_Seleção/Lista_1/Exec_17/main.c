#include <stdlib.h>

int main(){

float valor_gasto, valor_final;

printf("Digite o valor gasto pelo cliente:\n");
scanf("%f", &valor_gasto);

valor_final = valor_gasto * 1.1;

printf("O valor gasto pelo cliente incluindo a gorgeta eh de: %.2f\n", valor_final);

return 0;

}