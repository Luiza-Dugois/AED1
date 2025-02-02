#include <stdio.h>

int main (){
    double b, h, a;
    scanf("%lf", &b);
    scanf("%lf", &h);
    a=(b*h)/2.00;
    printf("Concluimos que, dado o limite da entrada, a resposta seria:  y = f(x) = %.5lf.\n", a);
    
    return 0;
}
