#include <stdio.h>

int main()
{
   float temperatura_f, temperatura_c;

    printf("Digite a temperatura atual em celsius:");
    scanf("%f", &temperatura_c);

    temperatura_f = (temperatura_c * (9/5) + 32);

    printf("A temperatura atual em fahrenheint eh de %.2f", temperatura_f);

    return 0;
}