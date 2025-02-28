#include <stdio.h>

int main(){

    //notas 
    int n100, n50, n20, n10, n5, n2, n1;
    //restos
    int r100, r50, r20, r10, r5, r2, r1;
    //valor de entrada
    int valor;

    scanf("%d", &valor);

    n100=valor/100;
    r100=valor%100;
    n50=r100/50;
    r50=r100%50;
    n20=r50/20;
    r20=r50%20;
    n10=r20/10;
    r10=r20%10;
    n5=r10/5;
    r5=r10%5;
    n2=r5/2;
    r2=r5%2;
    n1=r2/1;    

    if(n100>0){
        printf("%d notas de R$ 100\n", n100);
    }
    if(n50>0){
        printf("%d notas de R$ 50\n", n50);
    }
    if(n20>0){
        printf("%d notas de R$ 20\n", n20);
    }
    if(n10>0){
        printf("%d notas de R$ 10\n", n10);
    }
    if(n5>0){
        printf("%d notas de R$ 5\n", n5);
    }
    if(n2>0){
        printf("%d notas de R$ 2\n", n2);
    }
    if(n1>0){
        printf("%d notas de R$ 1\n", n1);
    }

    return 0;
}