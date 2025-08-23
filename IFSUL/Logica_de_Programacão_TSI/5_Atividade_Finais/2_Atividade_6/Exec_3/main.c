#include <stdio.h>

int main(void) {
  int vet[100], i, maior, cont=1;
  
  for(i = 0; i < 100; i++) {
    scanf("%i", &vet[i]);
  }
  for(i=0;i<100;i++){
    if (vet[i] == vet[i+1]){
      cont++;
      if (cont>maior){
     	maior = cont;  
      }
	}else{
	cont=1;
	}
  }
  printf ("%i", maior);
  return 0;
}