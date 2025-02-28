#include <stdio.h>

int main(void)
{
    float soma, desc;

    scanf("%f", &soma);

    if (soma <= 100)
    {
        printf("R$ %.2f", soma);
    }
    else if (soma > 100 && soma <= 200)
    {
        desc = soma - (soma*.05);
        printf("R$ %.2f", desc);

    }else{

        desc = soma - (soma*.10);
        printf("R$ %.2f", desc);

    }
}