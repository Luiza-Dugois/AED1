#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int const TAM = 15000;

void Insertion(int v[TAM],int a) {
    int i, j, aux;
    for(i=1; i<a; i++){
        aux=v[i];
        j=i-1;
            while(j>=0 && v[j]>aux){
                v[j+1]=v[j];
                j--;
            }
        v[j+1]=aux;
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
    Insertion(vetor, TAM);
    t = clock() - t; 

    printf("Tempo de execucao: %lf ms\n", ((double)t)/((CLOCKS_PER_SEC/1000)));

    return 0;
}
