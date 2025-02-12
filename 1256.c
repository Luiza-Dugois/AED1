#include <stdio.h>
#include <stdlib.h>
#define max 20

void hash(int lista[][max], int num[], int size, int valorp){
    int r, j;
    for (int h=0; h<size; h++){
        j=0;
        r=num[h]%valorp;
        while(lista[r][j]!=201 && j<max){
            j++;
        }
        if (j<max) { 
            lista[r][j]= num[h];
        }
    }
}

void imprimir(int lista[][max], int tamanho){
    int i;
    for(i=0; i<tamanho; i++){
        printf("%d -> ", i);
        for(int j=0; lista[i][j]!=201 && j<max; j++){
            printf("%d -> ", lista[i][j]);
        }
        printf("\\");
        printf("\n");
    }
}


int main() {
    int i, j, valorp, qtdn, number;
    scanf("%d", &number);
    
    for (i=0; i<number; i++){
        scanf("%d", &valorp);
        scanf("%d", &qtdn);
        int num[qtdn];
        for(j=0; j<qtdn; j++){
            scanf("%d", &num[j]);
        }
        int lista[valorp][max];
        for(int x=0; x<valorp; x++){
            for(int y=0; y<max; y++){
                lista[x][y]=201;
            }
        }
        hash(lista, num, qtdn, valorp);
        imprimir(lista, valorp);
        if (i < number - 1) {
            printf("\n");
        }
    }
    
    return 0;
}
