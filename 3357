#include <stdio.h>
#include <string.h>

int main() {
    int n, contagem=0,r;
    float l,q;
    scanf("%d", &n);
    scanf("%f%f", &l, &q);
    char nome[12], lista[n][12];
    for(int i=0; i<n; i++){
        scanf("%s", nome);
        strcpy (lista[i],nome);
    }
    float cuia=l;
    while(cuia>q){
        cuia=cuia-q;
        contagem++;
    }
    r=contagem%n;
    printf("%s %.1f\n", lista[r], cuia);
   
    return 0;
}
