#include <stdio.h>

int main(){
    int n,x;
    scanf("%d", &n);
    while(n>0){
        scanf("%d", &x);
        int soma=0;
        for (int j=1; j<=(x/2); j++){
            if (x%j==0){
                soma+=j;
            }
        }
        if(soma==x){
            printf("%d eh perfeito\n", x);
        }
        else{
            printf("%d nao eh perfeito\n", x);
        }
        n--;
    }
    
    return 0;
}
