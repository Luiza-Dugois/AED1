#include <stdio.h>

int mdc(int a, int b) {
    while (b!=0) {
        int aux=b;
        b=a%b;
        a=aux;
    }
    return a;
}

int main() {
    int n, a, b;

    while (1) {
        scanf("%d %d %d", &n, &a, &b);

        if (n==0 && a==0 && b==0) break;

        int ctga=n/a;
        int ctgb=n/b;
        int mmcab=(a/mdc(a, b))*b;  
        int ctgab=n/mmcab;
        int total=ctga+ctgb-ctgab;

        printf("%d\n", total);
    }

    return 0;
}
