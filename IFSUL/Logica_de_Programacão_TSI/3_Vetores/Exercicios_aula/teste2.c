#include <stdio.h>

int main(){
  int maior;
  int contpos, contpar;
  int a;
  contpos=0;
  contpar=0;
  printf("Digite um numero ");
  scanf("%i",&a);
  maior=a;
  while(a!=0){
    if(a>maior){
      maior=a;
    }
    if(a>0){
      contpos++;
    }
    if(a%2==0){
      contpar++;
    }
    printf("Digite um numero ");
    scanf("%i",&a);    
  }
  printf("O maior numero digitado foi %i",maior);
  printf("A quantidade de numeros positivos digitados foi %i",contpos);
  printf("A quantidade de numeros pares digitados foi %i",contpar);
  return 0;
}