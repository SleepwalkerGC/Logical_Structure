#include <stdio.h>

int main () {

  int vetor_1[10];
  int vetor_2[10];
  int i;


  for (i = 0; i < 10; i++) {
    printf("Informe um numero inteiro para posicao %d do vetor: ", i + 1);
    scanf("%d", &vetor_1[i]);
  }

  for (i = 0; i < 10; i++) {

    vetor_2[i] = ( vetor_1[i] * 2 ) ;
    printf("\n%d",vetor_2[i]);
  }

  return 0;
}