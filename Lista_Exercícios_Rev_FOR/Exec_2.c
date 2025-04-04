#include <stdio.h>

int main()
{
    int i, j;
    // Parte superior do losango
    for (i = 1; i <= 5; i++) {
        for (j = 5; j > i; j--) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    // Parte inferior do losango
    for (i = 4; i >= 1; i--) {
        for (j = 5; j > i; j--) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");


    return 0;
}
