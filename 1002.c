#include <stdio.h>
#include <math.h>
 
int main() {
    double raio, π=3.14159, area;
        scanf("%lf", &raio);
        area=π*pow(raio,2);
        printf("A=%.4f\n", area);
 
    return 0;
}
