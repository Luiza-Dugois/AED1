#include <stdio.h>
#include <string.h>

int main() {
    int casos;
    scanf("%d", &casos); 

    while (casos--) {
        char A[10004], B[10004];
        scanf("%s %s", A, B); 
        
        int operacoes = 0;
        int tam=strlen(A);
        for (int i = 0; i < tam; i++ ){
            if (A[i] <= B[i]) {
                operacoes += B[i] - A[i]; 
            } else {
                operacoes += 26 - (A[i] - B[i]); 
            }
        }

        printf("%d\n", operacoes);
    }

    return 0;
}
