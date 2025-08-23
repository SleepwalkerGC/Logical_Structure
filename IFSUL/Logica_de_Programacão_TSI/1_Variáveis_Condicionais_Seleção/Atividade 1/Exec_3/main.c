#include <stdio.h>

int main(void)
{
    int n1, ant1, post1, n2, ant2, post2;

    scanf("%d", &n1);
    scanf("%d", &n2);

    ant1 = n1 - 1;
    post1 = n1 + 1;
    ant2 = n2 - 1;
    post2 = n2 + 1;

        printf("%d %d %d %d %d %d", ant1, n1, post1, ant2, n2, post2);
    
}