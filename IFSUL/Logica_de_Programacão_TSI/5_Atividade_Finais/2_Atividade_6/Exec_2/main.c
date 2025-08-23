#include <stdio.h>

int main(void)
{
    int i, j, aux, num[10];

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
    }

    for (i = 0; i < 10 - 1; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (num[i] > num[j])
            {
                aux = num[i];
                num[i] = num[j];
                num[j] = aux;
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%i ", num[i]);
    }

    printf("\n");

    for (i = 10 - 1; i >= 0; i--)
    {
        printf("%i ", num[i]);
    }

    return 0;
}