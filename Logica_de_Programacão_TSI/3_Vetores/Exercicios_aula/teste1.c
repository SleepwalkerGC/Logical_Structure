#include <stdio.h>

int main(){
  int a;
  int maior;
  int f;
  int contpos, contpar;
  contpos=0;
  contpar=0;
  f=0;
  do{
    printf("Digite um numero ");
    scanf("%i",&a);
    if(f==0){
      maior=a;
      f=1;
    }
    if(a>maior){
      maior=a;
    }
    if(a>0){
      contpos=contpos+1;//contpos++
    }
    if(a%2==0){
      contpar=contpar+1;
    }
  }while(a!=0);
  printf("O maior numero digitado foi %i",maior);
  printf("A quantidade de numeros positivos digitados foi %i",contpos);
  printf("A quantidade de numeros pares digitados foi %i",contpar);
  return 0;
}