// Este exemplo mostra exemplo de como prencher um vetor com 5 elementos
// com dados fornecidos pelo usuário
#include <stdio.h>

int main(){
  int vet[5], i;

  // Solicitando dados ao usuário e preenchendo o vetor,
  // a partir de uma estrutura de repetição. Este é o modo
  // mais comum para preencher este tipo de estrutura.
  for(i = 0; i < 5; i++){
    printf("Informe o valor vet[%i]:\n",i);
    scanf("%i", &vet[i]);
  }
  
  // Imprimindo os valores informados pelo usuário
  for(i = 0; i < 5; i++){
    printf("vet[%i] = %i \n",i, vet[i]);
  }
  
  return 0;
}
