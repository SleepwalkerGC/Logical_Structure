#include <stdlib.h>

int main(){

float minimo, salario, num;

    printf("Digite o valor do salario minimo:\n");
    scanf("%f", &minimo);
    
    printf("Digite o valor do seu salario:\n");
    scanf("%f", &salario);

    num = salario / minimo;

    printf("Voce recebe %.2f salarios minimos:\n", num);

return 0;

}