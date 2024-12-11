#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

#define TAM  15000

int separa(int c, int f, int v[]){
    int pivo, p;
    pivo=v[f];
    p=c;
    int aux;
    for(int i=c; i<f; i++){
        if(v[i]<=pivo){
            aux=v[p];
            v[p]=v[i];
            v[i]=aux;
            p++;
        }
    }
    v[f]=v[p];
    v[p]=pivo;
    return  p; // retorna onde está meio pivo
}

void quicksort(int c, int f, int v[]){
    int p;
    if(c<f){
        p= separa(c, f, v);
        quicksort(c,p-1,v);
        quicksort(p+1,f,v);
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
    quicksort(0,TAM-1, vetor);
    t = clock() - t; 

    printf("Tempo de execucao: %lf ms\n", ((double)t)/((CLOCKS_PER_SEC/1000)));

    return 0;
}
