#include <stdio.h>

int main(){
    
    int n1, n2, n3, resultado;
    
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);


    if(n1!=n2 && n1!=n3 && n2!=n3){
        printf("INCONCLUSIVO");
    } else if (n1==n2 || n1==n3){
        switch (n1)
        {
        case 1:
            printf("APROVADO COM A");
            break;
        case 2:
            printf("APROVADO COM B");
            break;
        case 3:
            printf("APROVADO COM C");
            break;
        case 4:
            printf("REPROVADO");
            break;
        default:
            break;
        }
    } else if (n2==n3){
        switch (n2)
        {
        case 1:
            printf("APROVADO COM A");
            break;
        case 2:
            printf("APROVADO COM B");
            break;
        case 3:
            printf("APROVADO COM C");
            break;
        case 4:
            printf("REPROVADO");
            break;
        default:
            break;
        }
    }
    
}