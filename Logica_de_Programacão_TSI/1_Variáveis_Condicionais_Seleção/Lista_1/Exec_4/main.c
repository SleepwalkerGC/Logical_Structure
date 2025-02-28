#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, pre, pos;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &num);

    pre = num - 1;
    pos = num + 1;

    printf("O antecessor do numero digitado eh %d \n", pre);
    printf("O sucessor do numero digitado eh %d \n", pos);

    return 0;
}
