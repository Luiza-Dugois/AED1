#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int valor;
    struct no* esq;
    struct no* dir;
} no;


no* criarno(int valor) {
    no* novo=(no*)malloc(sizeof(no));
    novo->valor=valor;
    novo->esq=NULL;
    novo->dir=NULL;
    return novo;
}


no* inserir(no* raiz, int valor) {
    if (raiz==NULL) {
        return criarno(valor);
    }

    if (valor < raiz->valor) {
        raiz->esq = inserir(raiz->esq, valor);
    } else {
        raiz->dir = inserir(raiz->dir, valor);
    }

    return raiz;
}

void prefixa(no* raiz) {
    if (raiz != NULL) {
        printf("%d ", raiz->valor);
        prefixa(raiz->esq);
        prefixa(raiz->dir);
    }
}

void infixa(no* raiz) {
    if (raiz != NULL) {
        infixa(raiz->esq);
        printf("%d ", raiz->valor);
        infixa(raiz->dir);
    }
}


void posfixo(no* raiz) {
    if (raiz != NULL) {
        posfixo(raiz->esq);
        posfixo(raiz->dir);
        printf("%d ", raiz->valor);
    }
}

int main() {
    int C;
    scanf("%d", &C); 

    for (int caso = 1; caso <= C; caso++) {
        int N;
        scanf("%d", &N); 
        
        no* raiz = NULL;
        
        int valor;
        for (int i = 0; i < N; i++) {
            scanf("%d", &valor); 
            raiz = inserir(raiz, valor);
        }
        
        printf("Case %d:\n", caso);
        printf("Pre.: ");
        prefixa(raiz);
        printf("\n");
        printf("In..: ");
        infixa(raiz);
        printf("\n");
        printf("Post: ");
        posfixo(raiz);
        printf("\n");

        if (caso < C) {
            printf("\n"); 
        }
    }

    return 0;
} 
