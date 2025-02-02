#include <stdio.h>
#include <math.h>

void verifica(){
    int valor, m, i, r=1;
    scanf("%d", &valor);
    
    if(valor<2){
        printf("Not Prime\n");
    }
    else{
        if(valor==2||valor==3){
            printf("Prime\n");
        }
        else{
            m=sqrt(valor);
            for(i=2; i<=m; i++){
                r=valor%i;
                if(r==0){
                    printf("Not Prime\n"); 
                    break;
                }
            }
            if(r!=0){
                    printf("Prime\n");
            }
        }
    }
}


int main(){
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
    verifica();
    }
    
    return 0;
}
