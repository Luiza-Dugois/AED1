#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct no {
    char conteudo;
    struct no* esq;
    struct no* dir;
} no;

no* criarno(char valor) {
    no* novo = (no*)malloc(sizeof(no));
    novo->conteudo = valor;
    novo->esq = NULL;
    novo->dir = NULL;
    return novo;
}

no* inserir(no* raiz, char valor) {
    if (raiz == NULL) {
        return criarno(valor);
    }
    if (valor < raiz->conteudo) {
        raiz->esq = inserir(raiz->esq, valor);
    } else if (valor > raiz->conteudo) {
        raiz->dir = inserir(raiz->dir, valor);
    }
    return raiz;
}

void infixa(no* raiz, int *primeiro) {
    if (raiz != NULL) {
        infixa(raiz->esq, primeiro);
        if (*primeiro) {
            printf("%c", raiz->conteudo);
            *primeiro = 0;
        } else {
            printf(" %c", raiz->conteudo);
        }
        infixa(raiz->dir, primeiro);
    }
}

void prefixa(no* raiz, int *primeiro) {
    if (raiz != NULL) {
        if (*primeiro) {
            printf("%c", raiz->conteudo);
            *primeiro = 0;
        } else {
            printf(" %c", raiz->conteudo);
        }
        prefixa(raiz->esq, primeiro);
        prefixa(raiz->dir, primeiro);
    }
}

void posfixa(no* raiz, int *primeiro) {
    if (raiz != NULL) {
        posfixa(raiz->esq, primeiro);
        posfixa(raiz->dir, primeiro);
        if (*primeiro) {
            printf("%c", raiz->conteudo);
            *primeiro = 0;
        } else {
            printf(" %c", raiz->conteudo);
        }
    }
}

void buscar(no* raiz, char valor) {
    if (raiz == NULL) {
        printf("%c nao existe\n", valor);
        return;
    }
    if (valor == raiz->conteudo) {
        printf("%c existe\n", valor);
        return;
    }
    if (valor < raiz->conteudo) {
        buscar(raiz->esq, valor);
    } else {
        buscar(raiz->dir, valor);
    }
}

int main() {
    char comando[10];
    no* raiz = NULL;

    while (scanf("%s", comando) != EOF) {
        if (strcmp(comando, "I") == 0) {
            char valor;
            scanf(" %c", &valor);
            raiz = inserir(raiz, valor);
        } else if (strcmp(comando, "PREFIXA") == 0) { 
            int primeiro = 1;
            prefixa(raiz, &primeiro);
            printf("\n");
        } else if (strcmp(comando, "INFIXA") == 0) { 
            int primeiro = 1;
            infixa(raiz, &primeiro);
            printf("\n");
        } else if (strcmp(comando, "POSFIXA") == 0) { 
            int primeiro = 1;
            posfixa(raiz, &primeiro);
            printf("\n");
        } else if (strcmp(comando, "P") == 0) {
            char valor;
            scanf(" %c", &valor);
            buscar(raiz, valor);
        }
    }

    return 0;
}
