#include <stdio.h>

int main(){
    int valor,maior, contagem;
    for (int i=1; i<101; i++){
        scanf("%d", &valor);
        if(i==1) {
            maior=valor;
            contagem=i;
        }
        else{
            if(valor>maior){
                maior=valor;
                contagem=i;
            }
        }
    }
    printf("%d\n%d\n", maior, contagem);
    
    
    return 0;
}
