#include <stdio.h>
#include <math.h>

void check(){
    int c,f, qtd=0, i, aux2, aux1;
    scanf("%d", &c);
    scanf("%d", &f);
    aux1=ceil(sqrt(c));
    aux2=floor(sqrt(f));
    for(i=aux1; i<=aux2; i++){
            qtd++;
    }
    printf("%d\n", qtd);
}

int main (){
    int q;
    scanf("%d", &q);
    for (int i=0; i<q; i++){
        check();
    }
    
    return 0;
}
