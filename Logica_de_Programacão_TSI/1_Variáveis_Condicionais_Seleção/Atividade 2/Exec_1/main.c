#include <stdio.h>
int main(){
    float n1, n2, n3, aresta_maior;
    
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    
    aresta_maior = n1;
    
    if(n2>aresta_maior){
        aresta_maior = n2;
    }
    if(n3>aresta_maior){
        aresta_maior = n3;
    }
   
    if(((n1+n2+n3)-aresta_maior)<=aresta_maior){
        printf("NAO FORMA");
    }
    else if(n1==n2 && n1==n3){
        printf("EQUILATERO");
    }
    else if(n1!=n2 && n1!=n3 && n2!=n3){
        printf("ESCALENO");
    }
    else{
        printf("ISOSCELES");
    }

    return 0;   
}