// Este exemplo mostra exemplo de como prencher um vetor com 5 elementos
// com dados fornecidos pelo usuário
#include <stdio.h>

int main(){
  int vet[50], i, soma = 0;

  // Solicitando dados ao usuário e preenchendo o vetor,
  // a partir de uma estrutura de repetição. Este é o modo
  // mais comum para preencher este tipo de estrutura.
  for(i = 0; i < 50; i++){
    printf("Informe o valor vet[%i]:\n",i);
    scanf("%i", &vet[i]);
  }
  
  // Imprimindo os valores informados pelo usuário
  for(i = 0; i < 50; i++){
    // Verificando se o índice é par
    // Caso verdadeiro, incrementa a variável soma
    if(i % 2 == 0){
      soma = soma + vet[i];
    }
  }
  
  printf("Soma = %i \n",soma);

  return 0;
}
