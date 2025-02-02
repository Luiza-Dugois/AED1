#include <stdio.h>

int main() {
    int x;
    float y,v;
    scanf("%d", &x);
    scanf("%f", &y);
    v=(float)x/y;
    printf("%.3f km/l\n", v);

    return 0;
}
