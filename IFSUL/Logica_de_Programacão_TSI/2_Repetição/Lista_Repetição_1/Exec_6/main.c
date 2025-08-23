#include <stdio.h>

int main () {

  int vetor_1[10];
  int i, cont = 10;


  for (i = 0; i < cont; i++) {
    printf("Informe um numero inteiro para posicao %d do vetor: ", i + 1);
    scanf("%d", &vetor_1[i]);
  }

  for (i = 0; i < cont; i++) {

    if (vetor_1[i]%2 == 0)
    {
      printf("O numero da posicao %d do vetor eh par\n", i + 1);
    }else{
      printf("O numero da posicao %d do vetor nao eh par\n", i + 1);
    }
  }
}