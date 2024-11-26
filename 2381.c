#include <stdio.h>
#include <string.h>

void insertionsort(int N, char lista[][20]){
    int i, j;
    char aux[20];
    for(i=1; i<N; i++){
        strcpy(aux,lista[i]);
        j=i-1;
        while(j>=0 && strcmp(lista[j], aux)>0){
            strcpy(lista[j+1],lista[j]);
            j--;
        }
        strcpy(lista[j+1],aux);
    }
}


int main() {
    int K, N, i;
    scanf("%d %d", &N, &K);
    getchar();
    char lista[N][20];
    for(i=0; i<N; i++){
        fgets(lista[i],20, stdin);
        lista[i][strcspn(lista[i], "\n")] = '\0';
    }
    insertionsort(N, lista);
    if(K>0 && K<=N){
        printf("%s\n", lista[K-1]);
    }
    return 0;
    }
