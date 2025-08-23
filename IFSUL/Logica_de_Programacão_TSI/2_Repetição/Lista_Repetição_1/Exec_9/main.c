#include <stdio.h>

int main()
{
    int n1, i;

    printf("Digite o numero inicial do laco: ");
    scanf("%d", &n1);

    for (i = n1; i >= 1; i--)
    {
        printf("%d\n", i);
    }
}