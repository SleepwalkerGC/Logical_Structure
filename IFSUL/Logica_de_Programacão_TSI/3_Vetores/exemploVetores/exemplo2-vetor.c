// Este exemplo mostra exemplo de como prencher um vetor com 5 elementos
#include <stdio.h>

int main(){
    int vet[5], i;

    // A forma mais simples de preencher o vetor com dados.
    // No entanto, essa forma é pouco usual, tendo em vista que a
    // indexação e o preenchimento está sendo feito de forma estática.
    vet[0] = 10;
    vet[1] = 30;
    vet[2] = 4;
    vet[3] = 2;            
    vet[4] = 10;

    // Exemplo de como imprimir o valores de um vetor
    // utilizando estrutura de repetição.
    // Essa é a forma mais usual para acesso a elementos de um vetor/matriz.
    for(i = 0; i < 5; i++){
        printf("vet[%d] = %d \n",i, vet[i]);
    }

    return 0;    
}
