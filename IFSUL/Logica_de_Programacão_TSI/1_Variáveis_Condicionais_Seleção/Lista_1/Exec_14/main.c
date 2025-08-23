#include <stdio.h>

int main()
{
   float temperatura_f, temperatura_c;

    printf("Digite a temperatura atual em fahrenheint:");
    scanf("%f", &temperatura_f);

    temperatura_c = (temperatura_f - 32) * 5 / 9;

    printf("A temperatura atual em celsius eh de %.2f", temperatura_c);

    return 0;
}