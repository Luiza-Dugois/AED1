
#include <stdio.h>
#include <math.h>

int main() {
    int i, qtd=0;
    float media, valor, soma=0;
    for(i=0; i<=5; i++){
        scanf("%f", &valor);
        if(valor>=0){
            soma+=valor;
            qtd++;
        }
    }
    printf("%d valores positivos\n", qtd);
    media=soma/(float)qtd;
    printf("%0.1f\n", media);

    return 0;
}
