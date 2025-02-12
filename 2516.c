#include <stdio.h>

int main() {
    int s, va, vb;

    while (scanf("%d%d%d", &s, &va, &vb) != EOF) {
        if (vb>=va) {
            printf("impossivel\n");
        } else {
            double tempo;
            tempo=(double)s/(va - vb);
            printf("%.2f\n", tempo);
        }
    }

    return 0;
}
