#include <stdio.h>

int main () {

  int vetor_1[10];
  int i, j, cont = 10;


  for (i = 0; i < cont; i++) {
    printf("Informe um numero inteiro para posicao %d do vetor: ", i + 1);
    scanf("%d", &vetor_1[i]);
  }

  for (i = 0; i < cont; i++) {

    if (vetor_1[i]%3 == 0)
    {
      printf("A posicao %d do vetor eh divisivel por 3\n", i + 1);
    }else{
      printf("A posicao %d do vetor nao eh divisivel por 3\n", i + 1);
    }
  }
}