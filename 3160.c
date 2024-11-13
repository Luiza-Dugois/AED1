#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cel{
    char conteudo[20];
    struct cel* next;
};

void inserir(struct cel **plista, char *nome, struct cel **ultimo){
    struct cel *novo=(struct cel*)malloc(sizeof(struct cel));
    if(novo==NULL){
        exit(1);
    }
    strcpy(novo->conteudo, nome);
    novo->next=NULL;
    if(*plista==NULL){
        *plista=novo;
        *ultimo=novo;
    }
    else{
        (*ultimo)->next=novo;
        *ultimo=novo;
    }
}

void inserirlista(struct cel **plista, struct cel *listaindic, struct cel **ultimo){
    if(listaindic==NULL) return;
    struct cel *p=listaindic;
    while(p!=NULL){
        inserir(plista,p->conteudo, ultimo);
        p=p->next;
    }
}

void indicar(struct cel **plista, struct cel *listaindic, char *nome, struct cel **ultimo){
    struct cel *aux=*plista;
    struct cel *antes=NULL;
    
    while(aux!=NULL && strcmp(aux->conteudo,nome)!=0){
        antes=aux;
        aux=aux->next;
    }
    if(aux!=NULL){
        struct cel *listanova = listaindic;
        while(listanova!=NULL){
            struct cel * nova=(struct cel*)malloc(sizeof(struct cel));
            if(nova==NULL){
                exit(1);
            }
            strcpy(nova->conteudo, listanova->conteudo);
            nova->next=aux;
            if(antes==NULL){
                *plista=nova;
            }
            else{
                antes->next=nova;
            }
            antes=nova;
            listanova=listanova->next;
            
        }
    }
    else{
        inserirlista(plista,listaindic, ultimo);
    }
}

void imprimir(struct cel *ilista){
    struct cel *p=ilista;
    int com=1;
    while(p!=NULL){
        if(com==1){
            printf("%s", p->conteudo);
            com=0;
        }
        else{ printf(" %s", p->conteudo);
        }
        p=p->next;
    }
    printf("\n");
}

void liberar(struct cel*ilista){
    struct cel *p=ilista;
    struct cel *b;
    while(p!=NULL){
        b=p;
        p=p->next;
        free(b);
    }
}

int main() {
    char listaL[200], listaI[200], amgS[20];
    
    fgets(listaL, sizeof(listaL),stdin);
    listaL[strcspn(listaL,"\n")]='\0';
    fgets(listaI,sizeof(listaI),stdin);
    listaI[strcspn(listaI,"\n")]='\0';
    fgets(amgS,sizeof(amgS),stdin);
    amgS[strcspn(amgS,"\n")]='\0';
    
    struct cel *ilistaL= NULL; 
    struct cel *ultimoL= NULL;
    struct cel *ultimoI= NULL;
    char *nome=strtok(listaL, " ");
    while(nome!=NULL){
        inserir(&ilistaL,nome, &ultimoL);
        nome=(strtok(NULL, " "));
    }
    
    struct cel *ilistaI = NULL;
    nome=strtok(listaI, " ");
    while(nome!=NULL){
        inserir(&ilistaI,nome,&ultimoI);
        nome=strtok(NULL, " ");
    }
    
    if(strcmp(amgS,"nao")!=0){
        indicar(&ilistaL,ilistaI,amgS, &ultimoL);
    }
    else{
        inserirlista(&ilistaL, ilistaI, &ultimoL);
    }
    
    imprimir(ilistaL);
    liberar(ilistaL);
    
    return 0;
}
