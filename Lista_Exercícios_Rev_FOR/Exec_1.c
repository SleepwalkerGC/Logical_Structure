#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    // Padrão A
    printf("(A)\n");
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    // Padrão B
    printf("(B)\n");
    for (i = 10; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    // Padrão C
    printf("(C)\n");
    for (i = 1; i <= 10; i++) {
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        for (j = 10; j >= i; j--) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    // Padrão D
    printf("(D)\n");
    for (i = 1; i <= 10; i++) {
        for (j = 10; j > i; j--) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}