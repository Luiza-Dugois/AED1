#include <stdio.h>
#include <string.h>

void posfixa(char *prefixo, char *infixo, int tamanho) {
    if (tamanho==0) return;
    char raiz = prefixo[0];
    int raizinf=-1;
    for (int i=0; i<tamanho; i++) {
        if (infixo[i]==raiz) {
            raizinf=i;
            break;
        }
    }
    posfixa(prefixo+1, infixo, raizinf);
    posfixa(prefixo+raizinf+1, infixo+raizinf+1, tamanho-raizinf-1);
    printf("%c", raiz);
}

int main() {
    int C;
    scanf("%d", &C);

    while (C!=0) {
        int N;
        char prefixo[53], infixo[53];
        scanf("%d %s %s", &N, prefixo, infixo);

        posfixa(prefixo, infixo, N);
        printf("\n");
        C--;
    }

    return 0;
}
