#include <stdio.h>

int main() {
    double v, r, pi=3.14159;
    scanf("%lf", &r);
    v=(4.0/3)*pi*r*r*r;
    printf("VOLUME = %.3lf\n", v);
    return 0;
}
