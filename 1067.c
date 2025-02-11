#include <stdio.h>

int main() {
    int x,r;
    scanf("%d", &x);
    for(int i=1; i<=x; i++){
        r=i%2;
        if(r!=0){
            printf("%d\n", i);
        }
    }
    return 0;
}
