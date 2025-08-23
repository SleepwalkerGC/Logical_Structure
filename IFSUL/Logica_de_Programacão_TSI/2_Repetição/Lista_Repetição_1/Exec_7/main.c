#include <stdio.h>

int main () {

int n1, n2, i;

printf("Digite o numero inicial do laco: ");
scanf("%d", &n1);

printf("Digite o numero final do laco: ");
scanf("%d", &n2);

    if (n1 > n2)
    {
        for (i = n1+1; i > n2; i--)
        {
            printf("%d\n", i - 1);
        }
        
    }
    else if(n2 > n1)
    {
        for (i = n1-1; i < n2; i++)
        {
            printf("%d\n", i + 1);
        }

    }
}