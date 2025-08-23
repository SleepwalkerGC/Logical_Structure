#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A , B;

    printf("Digite o lado A do seu triangulo:\n");
    scanf("%f", &A);

    printf("Digite o lado B do seu triangulo:\n");
    scanf("%f", &B);

    float area_tri = (A * B)/2;

    printf("A area do seu triangulo eh: %f \n", area_tri);

    return 0;
}
