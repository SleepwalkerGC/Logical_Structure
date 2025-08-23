#include <stdio.h>

int main(){
    float x, y;

    scanf("%f", &x);
    scanf("%f", &y);

    if((x<=69 || x>=779 || y<=0 || y>=233)){
        printf("UHHH");
    }else if((x>=69 && x<=98 && y>=204 && y<=233) || (x>=750 && x<=779 && y>=204 && y<=233)){
        printf("GOLACO");
    }else{
        printf("GOL");
    }
    
    return 0;
}