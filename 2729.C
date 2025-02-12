#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_ITEM 21
#define MAX_LINHA 20000 

struct cel {
    char item[MAX_ITEM];
    struct cel *next;
};

void inserir(struct cel **list, char *produto, struct cel **ultimo) {
    struct cel *novo=(struct cel *)malloc(sizeof(struct cel));
    if (novo==NULL) {
        exit(1);
    }
    strcpy(novo->item, produto);
    novo->next = NULL;
    if (*list == NULL) {
        *list = novo;
        *ultimo = novo;
    } else {
        (*ultimo)->next=novo;
        *ultimo=novo;
    }
}


void verificarlista(struct cel **list) {
    struct cel *atual=*list;
    while (atual!=NULL && atual->next!=NULL) {
        struct cel *anterior=atual;
        struct cel *itemav=atual->next;
        while (itemav!=NULL) {
            if (strcmp(atual->item, itemav->item) == 0) {
                anterior->next = itemav->next;
                free(itemav);
                itemav = anterior->next;
            } else {
                anterior=itemav;
                itemav=itemav->next;
            }
        }
        atual=atual->next;
    }
}


void ordenarlista(struct cel **list) {
    if (*list == NULL) return;
    struct cel *i, *j;
    char aux[MAX_ITEM];
    for (i = *list; i != NULL; i = i->next) {
        for (j = i->next; j != NULL; j = j->next) {
            if (strcmp(i->item, j->item) > 0) {
                strcpy(aux, i->item);
                strcpy(i->item, j->item);
                strcpy(j->item, aux);
            }
        }
    }
}


void printarlista(struct cel **list) {
    struct cel *p = *list;
    int com= 1;
    while (p != NULL) {
        if (com==1) {
            printf("%s", p->item);
            com=0;
        } else {
            printf(" %s", p->item);
        }
        p=p->next;
    }
    printf("\n");
}


void liberarlista(struct cel **list) {
    struct cel *p = *list;
    struct cel *temp;
    while (p != NULL) {
        temp = p;
        p = p->next;
        free(temp);
    }
}

int main() {
    int N, i;
    scanf("%d", &N);
    getchar();

    char *lista = (char *)malloc(MAX_LINHA * sizeof(char));
    struct cel **ilista=(struct cel **)malloc(N * sizeof(struct cel *));
    struct cel **ultimo=(struct cel **)malloc(N * sizeof(struct cel *));
    if (lista==NULL || ilista==NULL || ultimo==NULL) {
        return 1;
    }

    for (i = 0; i < N; i++) {
        fgets(lista, MAX_LINHA, stdin);
        lista[strcspn(lista, "\n")] = '\0'; 
        ilista[i]=NULL;
        ultimo[i]=NULL;
        char *produto=strtok(lista, " ");
        while (produto!=NULL) {
            inserir(&ilista[i], produto, &ultimo[i]);
            produto=strtok(NULL, " ");
        }
    }

    for (i = 0; i < N; i++) {
        verificarlista(&ilista[i]);
        ordenarlista(&ilista[i]);
        printarlista(&ilista[i]);
        liberarlista(&ilista[i]);
    }

    free(lista);
    free(ilista);
    free(ultimo);

    return 0;
}
