#include <stdio.h>
#include <math.h>

int main (){
    int t, valor, soma;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        soma=0;
        scanf("%d", &valor);
        for(int j=0; j<valor; j++){
            soma=soma + pow(2,j);
        }
        printf("%d\n", soma);
    }
    
    return 0;
}
