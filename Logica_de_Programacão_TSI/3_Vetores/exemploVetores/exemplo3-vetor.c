// Este exemplo mostra exemplo de como prencher um vetor com 5 elementos
// com dados fornecidos pelo usu�rio
#include <stdio.h>

int main(){
  int vet[5], i;

  // Solicitando dados ao usu�rio e preenchendo o vetor,
  // a partir de uma estrutura de repeti��o. Este � o modo
  // mais comum para preencher este tipo de estrutura.
  for(i = 0; i < 5; i++){
    printf("Informe o valor vet[%i]:\n",i);
    scanf("%i", &vet[i]);
  }
  
  // Imprimindo os valores informados pelo usu�rio
  for(i = 0; i < 5; i++){
    printf("vet[%i] = %i \n",i, vet[i]);
  }
  
  return 0;
}
