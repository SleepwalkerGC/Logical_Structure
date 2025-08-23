#include <stdio.h>

int main () {

int n1, i, result;

printf("Digite um numero para ver sua tabuada: ");
scanf("%d", &n1);

        for (i = 0; i <= 10; i++)
        {
            result = i * n1;
            printf("%d x %d = %d\n", i, n1, result);
        }
}