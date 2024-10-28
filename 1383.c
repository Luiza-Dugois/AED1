#include <stdio.h>
#define size 900

int vlinha (int m[size][9],int aux){
    int i, j, k=0;
    for(i=aux; i<aux+9; i++){ 
        for(j=0; j<8; j++){ 
            for(k=j+1; k<9; k++){
                if (m[i][j]==0 || m[i][j]==m[i][k]) return 1;
            }
        }
    }
    return 0;
}

int vcoluna (int m[size][9], int aux){
    int i, j, k;
    for(j=0; j<8; j++){      //
        for(i=aux; i<aux+9; i++){      // 0-8
            for(k=i+1; k<aux+9; k++){    //  0-8
                if (m[i][j]==m[k][j]) return 1;
            }
        }
    }
    return 0;
}

int vquadrado(int m[size][9], int aux, int col){
    int v,i,j,k;
    for(v=aux; v<aux+3; v++){                 
        for(j=col; j<col+3; j++){ 
            for(i=aux; i<3; i++){         
               for(k=0+col; k<col+3; k++){ 
                    if((v!=i||j!=k) && m[v][j]==m[i][k]) return 1;
                }
            }
        }
    }
    return 0;
}

int vregiao(int mat[size][9], int aux, int n){
    int soma=0, i,a, col;
    for(a=1; a<=3; a++){
        col=0;
        for(i=0; i<3; i++){
            col=i*3;
            soma+=vquadrado(mat,aux,col);
        }
        aux+=3;
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
        soma=vlinha(mat,aux)+vcoluna(mat,aux)+vregiao(mat,aux,n);
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
