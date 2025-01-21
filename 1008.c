#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    float s, t;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%f", &s);
    t=(float)b*s;
    printf("NUMBER = %d\n", a);
    printf("SALARY = U$ %0.2f\n", t);
    return 0;
}
