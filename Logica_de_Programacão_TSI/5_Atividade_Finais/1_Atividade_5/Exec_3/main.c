#include <stdio.h>
main()
{
    int N, i, vetor[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    scanf("%d", &N);

    while (N >= 0)
    {
        vetor[N]++;
        scanf("%d", &N);
    }
    for (i = 0; i < 10; i++)
    {
        if (vetor[i] > 0)
        {
            printf("%d:%d\n", i, vetor[i]);
        }
    }
}