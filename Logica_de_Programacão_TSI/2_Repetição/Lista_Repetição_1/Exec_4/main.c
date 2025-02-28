#include <stdio.h>

int main(void)
{
    int max;

    printf("Digite o numero limite: ");
    scanf("%d", &max);
    for (int i = 0; i <= max; i++)
    {
        printf("%d ", i);
    }
}