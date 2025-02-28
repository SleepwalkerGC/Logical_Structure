#include <stdio.h>
#include <stdlib.h>
int main(void)
{

  int vetor[20];
  int i, maior, menor, cont = 20;

  for (i = 0; i < cont; i++)
  {
    printf("Informe um numero inteiro para posicao %d do vetor: ", i + 1);
    scanf("%d", &vetor[i]);
    if (i == 0)
    {
      maior = vetor[i];
      menor = vetor[i];
    }

    if (vetor[i] >= maior)
    {
      maior = vetor[i];
    }

    if (vetor[i] <= menor)
    {
      menor = vetor[i];
    }
  }
  printf("O maior numero digitado foi %d e o menor foi %d.\n", maior, menor);
}