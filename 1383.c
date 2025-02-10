#include <stdio.h>
#define size 100

int vlinha (int m[size][9],int aux){
    for(int i=aux; i<aux+9; i++){ 
        int freq[10]={0};
        for(int j=0; j<9; j++){ 
            if (m[i][j]<1 || m[i][j]>9 || freq[m[i][j]]) return 1;
            freq[m[i][j]]=1;
        }
    }
    return 0;
}

int vcoluna (int m[size][9], int aux){
    for(int j=0; j<9; j++){     
        int freq[10]={0};
        for(int i=aux; i<aux+9; i++){     
            if (m[i][j]<1 || m[i][j]>9 || freq[m[i][j]]) return 1;
            freq[m[i][j]]=1;
        }
    }
    return 0;
}

int vquadrado(int m[size][9], int aux, int col){
    int v,j, freq[10]={0};
    for(v=aux; v<aux+3; v++){                 
        for(j=col; j<col+3; j++){ 
            if (m[v][j]<1 || m[v][j]>9 || freq[m[v][j]]) return 1;
            freq[m[v][j]]=1;    
        }
    }
    return 0;
}

int vregiao(int mat[size][9], int aux){
    int i, j;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(vquadrado(mat,aux+i*3, j*3)) return 1;
        }
    }
    return 0;
}


int main() {
    int n, i, r, j, mat[size][9], aux=0, soma=0, k=1;
    scanf("%d", &n);
    r=n*9;
    for (i=0; i<r; i++){
        for (j=0; j<9; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    for(i=0; i<r; i+=9){
        soma=0;
        soma=vlinha(mat,aux)+vcoluna(mat,aux)+vregiao(mat,aux);
        printf("Instancia %d\n", k);
        if(soma==0){
            printf("SIM\n");
        }
        else{
            printf("NAO\n");
        }
        k++;
        aux+=9;
        printf("\n");
    }
    
    return 0;
}
