#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A , B , Aux;

    printf("Digite o valor A:\n");
    scanf("%d", &A);

    printf("Digite o valor B:\n");
    scanf("%d", &B);

    Aux = A;
    A = B;
    B = Aux;

    printf("A troca dos seus valores resulta em %d e %d", A, B);

    return 0;
}
