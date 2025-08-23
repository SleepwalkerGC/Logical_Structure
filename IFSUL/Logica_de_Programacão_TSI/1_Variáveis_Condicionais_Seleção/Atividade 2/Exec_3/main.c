#include <stdio.h>

int main(){
    
    int n1, n2, maior, menor;
    
    scanf("%d", &n1);
    scanf("%d", &n2);
    
    if(n1>n2){
        maior = n1;
        menor = n2;
    }else if(n2>n1){
        maior = n2;
        menor = n1;
    }
    
    if((maior-menor)<=1){
        printf("%d %d %d %d", menor-1, menor, maior, maior+1);
    }else{
        printf("%d %d %d %d %d %d", menor-1, menor, menor+1, maior-1, maior, maior+1);
    }
    
    
    return 0;
}