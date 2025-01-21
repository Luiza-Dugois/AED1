#include <stdio.h>
#include <math.h>

int main() {
    int X,Y, soma=0, aux, r;
    scanf("%d", &X);
    scanf("%d", &Y);
    if(X>Y){
        aux=Y;
        Y=X;
        X=aux;
    }
    for(int i=X+1; i<Y; i++){
        r=i%2;
        if(r!=0){
            soma+=i;
        }
    }
    printf("%d\n", soma);
    return 0;
}
