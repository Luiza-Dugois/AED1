#include <stdio.h>
#include <stdlib.h>

struct celp {
    int num;
    struct celp* back;
    struct celp* prox;
};
struct celi{
    int num;
    struct celi* back;
    struct celi* prox;
};

void inserep (struct celp **lista, struct celp** ultimo, int valor){
    struct celp *novo = (struct celp*) malloc(sizeof(struct celp));
    novo->num = valor;
    novo->prox = NULL;
    if(*lista==NULL){
        novo->back =NULL;
        *lista=novo;
    }
    else{
        (*ultimo)->prox=novo;
        novo->back=*ultimo;
    }
    *ultimo=novo;
}

void inserei (struct celi **lista, struct celi **ultimo, int valor){
    struct celi* novo =(struct celi*)malloc(sizeof(struct celi));
    novo->num=valor;
    novo->prox=NULL;
    if(*lista==NULL){
        novo->back=NULL;
        *lista=novo;
    }
    else{
        (*ultimo)->prox=novo;
        novo->back=*ultimo;
    }
    *ultimo=novo;
}

void organizarpar(struct celp *lista){
    if(lista==NULL) return;
    struct celp* i, *j;
    int aux;
    for(i=lista->prox; i!=NULL; i=i->prox){ 
        aux=i->num;
        j=i->back;
        while(j!=NULL && j->num>aux) {
            j->prox->num= j->num;
            j=j->back;
        }
        if(j==NULL){
            lista->num=aux;
        }
        else{
            j->prox->num=aux;
        }
    }
}

void organizarimpar(struct celi *lista){
    if(lista==NULL) return;
    struct celi* i, *j;
    int aux;
    for(i=lista->prox; i!=NULL; i=i->prox){ 
        aux=i->num;
        j=i->back;
        while(j!=NULL && j->num<aux) {
            j->prox->num=j->num;
            j=j->back;
        }
        if(j==NULL){
            lista->num=aux;
        }
        else{
            j->prox->num=aux;
        }
    }
}

void printar(struct celp *listap, struct celi *listai){
    struct celp* pp=listap;
    while(pp!=NULL){
        printf("%d\n", pp->num);
        pp=pp->prox;
    }
    struct celi* pi=listai;
    while(pi!=NULL){
        printf("%d\n", pi->num);
        pi=pi->prox;
    }
}
    

int main() {
    int linhas, valor, r, i;
    scanf("%d", &linhas);
    struct celp* lp=NULL, *ultimop=NULL;
    struct celi* li=NULL , *ultimoi=NULL;
    for (i=0; i<linhas; i++){
        scanf("%d", &valor);
        r=valor%2;
        if(r==0){
            inserep(&lp, &ultimop, valor);
        }
        else{
            inserei(&li,&ultimoi, valor);
        }
    }
    organizarpar(lp);
    organizarimpar(li);
    printar(lp, li);

    return 0;
}
