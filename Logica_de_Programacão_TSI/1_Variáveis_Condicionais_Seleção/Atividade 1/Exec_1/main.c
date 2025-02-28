#include <stdio.h>

int main(void)
{
    int n1, n2;

    scanf("%d", &n1);

    scanf("%d", &n2);

    if (n1 > n2)
    {
        printf("%d %d", n2, n1);
    }
    else
    {
        printf("%d %d", n1, n2);
    }
}