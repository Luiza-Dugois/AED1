#include <stdio.h>

int main() {
    int a,b,c,d, r1,r2;
    scanf("%d%d%d%d", &a,&b,&c,&d);
    if(b>d){
        r1=c-a-1;
        r2=(60-b)+d;
    }
    else{
        if(a==c && b==d){
            r1=24;
            r2=0;
        }
        else{
        r1=c-a;
        r2=d-b;
        }
    }
    if(r1<0){
        r1+=24;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", r1, r2);

    return 0;
}
