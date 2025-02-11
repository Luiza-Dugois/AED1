#include <stdio.h>
#include <string.h>

int main() {
    int tam, i;
    char string[1001];
    while (scanf("%s", string) != EOF){
        int pilha=0;
        tam=strlen(string);
        for( i=0; i<tam; i++){
            if(string[i]=='('){
                pilha++;
            }
            else{
                if(string[i]==')'){
                    if(pilha>0){
                        pilha--;
                    }
                    else{
                        break;
                    }
                }
            }
        }
        if(i==tam && pilha==0){
            printf("correct\n");
        }
        else{
            printf("incorrect\n");
        }
    }
   
    return 0;
}
