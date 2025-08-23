#include <stdio.h>

int main(){
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, digito, impar, par, verificador;

    scanf("%d", &digito);
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    scanf("%d", &n4);
    scanf("%d", &n5);
    scanf("%d", &n6);
    scanf("%d", &n7);
    scanf("%d", &n8);
    scanf("%d", &n9);
    scanf("%d", &n10);
    scanf("%d", &n11);
    scanf("%d", &n12);

    impar = (n1+n3+n5+n7+n9+n11)*3;
    par = (n2+n4+n6+n8+n10+n12)+impar;

    verificador = 10-(par%10);

    if(verificador == digito){
        printf("S");
    }else{
        printf("N");
    }

    return 0;
}