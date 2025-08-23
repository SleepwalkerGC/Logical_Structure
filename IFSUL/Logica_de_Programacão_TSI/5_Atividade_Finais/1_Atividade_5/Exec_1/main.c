#include <stdio.h>
main()
{
    int i, N, num[100];

    scanf("%d", &N);
    
    for (i = 0; i < N; i++)
    {
        scanf("%d", &num[i]);
    }

    for (i = N - 1; i >= 0; i--)
    {
        printf("%d ", num[i]);
    }
    
    printf("\n");
}