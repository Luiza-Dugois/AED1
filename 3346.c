#include <stdio.h>

int main() {
    double v1, v2, vf;
    scanf("%lf", &v1);
    scanf("%lf", &v2);
    vf=(((v1/100)+1.0)*((v2/100)+1.0))-1.0;    
    vf=vf*100;
    printf("%.6lf\n", vf);
    
    return 0;
}
