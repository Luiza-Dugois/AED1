#include <stdio.h>

int main() {
    int i=0, soma=0, aux, x=1, y=1;
    scanf("%d", &x);
    scanf("%d", &y);
    while(x>0 && y>0){
        soma=0;
        if(y<x){
           aux=x;
           x=y;
           y=aux;
        }
        for(int i=x; i<=y; i++){
            printf("%d ", i);
            soma+=i;
        }
        printf("Sum=%d\n", soma);
        scanf("%d", &x);
        scanf("%d", &y);
    }
    
    return 0;
}
