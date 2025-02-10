#include <stdio.h>

int main(){
    int a, b, q, r;
    scanf("%d", &a);
    scanf("%d", &b);
    r=a%b;
    q=a/b;
    if(r<0){
        if (b>0){
            r+=b;
            q-=1;
        }
        else{
            r-=b;
            q+=1;
        }
    }
    printf("%d %d\n", q, r);
    
    
    return 0;
}
