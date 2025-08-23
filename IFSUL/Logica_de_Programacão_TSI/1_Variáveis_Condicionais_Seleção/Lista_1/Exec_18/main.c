#include <stdlib.h>

int main(){

    float raio, area;

    printf("Digite o raio do circulo:");
    scanf("%f", &raio);

    area = 3.141593 * raio * raio;

    printf("A area do circulo eh: %.2f", area);

return 0;

}