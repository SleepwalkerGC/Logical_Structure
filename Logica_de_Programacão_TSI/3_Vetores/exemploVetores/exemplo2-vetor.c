// Este exemplo mostra exemplo de como prencher um vetor com 5 elementos
#include <stdio.h>

int main(){
    int vet[5], i;

    // A forma mais simples de preencher o vetor com dados.
    // No entanto, essa forma � pouco usual, tendo em vista que a
    // indexa��o e o preenchimento est� sendo feito de forma est�tica.
    vet[0] = 10;
    vet[1] = 30;
    vet[2] = 4;
    vet[3] = 2;            
    vet[4] = 10;

    // Exemplo de como imprimir o valores de um vetor
    // utilizando estrutura de repeti��o.
    // Essa � a forma mais usual para acesso a elementos de um vetor/matriz.
    for(i = 0; i < 5; i++){
        printf("vet[%d] = %d \n",i, vet[i]);
    }

    return 0;    
}
