#include <stdio.h>
#include <math.h>

int main() {
    double A,B, C, delta, R1, R2;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    delta=(B*B)-4*A*C;
    if(delta<0 || A==0){
        printf("Impossivel calcular\n");
    }
    else{
        R1=((-B+(sqrt(delta)))/(2*A));
        R2=((-B-(sqrt(delta)))/(2*A));
        printf("R1 = %0.5lf\n", R1);
        printf("R2 = %0.5lf\n", R2);
    }
    return 0;
}
