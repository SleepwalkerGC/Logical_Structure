#include <stdio.h>
#include <stdlib.h>

int comp ( const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    
    int Numero;
    
    scanf("%d", &Numero);
    
    int vetor[Numero];
    
    for (int i = 0; i < Numero; i++) 
        scanf("%d", &vetor[i]);
    
    qsort(vetor, Numero, sizeof(int), comp);
    
    for (int i = 0; i < Numero; i++) 
        printf("%d\n", vetor[i]);
    
    return 0;
}