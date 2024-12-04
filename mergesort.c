#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int const TAM = 15000;

void merge(int v[TAM], int c, int meio, int size){
    int met1= meio-c+1;
    int met2=size-meio;
    int E[met1], D[met2];

    for (int i=0; i<met1; i++){
        E[i]=v[c+i];
    }
    for (int j=0; j<met2; j++){
        D[j]=v[meio+1+j];
    }
    
    int i=0, j=0, k=c;
    
    while(i<met1 && j<met2){
        if(E[i]<=D[j]){
            v[k]=E[i];
            i++;
        }
        else{
            v[k]=D[j];
            j++;
        }
        k++;
    }
    
    while(i<met1){
        v[k]=E[i];
        i++;
        k++;
    }
    while(j<met2){
        v[k]=D[j];
        j++;
        k++;
    }
    
}

void mergesort(int v[TAM],int c, int size) {
    if(c<size){
        int meio=c+(size-c)/2;
        
        mergesort(v,c, meio);
        mergesort(v,meio+1,size);
        merge(v,c,meio,size);
    }
}

int main(){
    clock_t t;
    int vetor[TAM];

    srand((unsigned)time(NULL));

    for(int a = 0; a < TAM; a++){
        vetor[a] = rand() % TAM;
    }
        
    t = clock(); 
    mergesort(vetor,0,TAM-1);
    t = clock() - t; 

    printf("Tempo de execucao: %lf ms\n", ((double)t)/((CLOCKS_PER_SEC/1000)));

    return 0;
}
