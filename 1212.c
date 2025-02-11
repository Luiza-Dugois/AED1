#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    while (a!=0 || b!=0) {
        int op=0, contagem=0;
        while (a>0 || b>0) {
            int num;
            num= (a%10)+(b%10)+op;
            if (num>=10) {
                op = 1;
                contagem++;
            } 
            else {
                op = 0;
            }
            a=a/10;
            b=b/10;
        }
        if (contagem==0) {
            printf("No carry operation.\n");
        } 
        else{
            if (contagem==1) {
                printf("1 carry operation.\n");
            } 
            else {
                printf("%d carry operations.\n", contagem);
            }
        }
        scanf("%d%d", &a, &b);
    }
    return 0;
}
