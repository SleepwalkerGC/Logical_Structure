#include <stdlib.h>

int main(){

float base, altura, area, perimetro;

printf("Digite um valor para base do retangulo:\n");
scanf("%f", &base);

printf("Digite um valor para altura do retangulo:\n");
scanf("%f", &altura);

area = base * altura;

perimetro = (base * 2)+(altura * 2);

printf("A sua area eh %.2f \n", area);
printf("O seu perimetro eh %.2f \n", perimetro);

return 0;

}