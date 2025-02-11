#include <stdio.h>

int main(){
    double v;
    scanf("%lf", &v);
    int notas, moedas, vcentavos,i;
    vcentavos=(int)(v*100 + 0.5);
    int notaspossiveis[6]={100,50,20,10,5,2}, moedaspossiveis[6]={100,50,25,10,5,1};

    printf("NOTAS:\n");
    for(i=0; i<6; i++){
        notas=vcentavos/(notaspossiveis[i]*100);
        vcentavos=vcentavos%(notaspossiveis[i]*100);
        printf("%d nota(s) de R$ %d.00\n", notas, notaspossiveis[i]);
    }
    printf("MOEDAS:\n");
    for(i=0; i<6; i++){
        moedas=vcentavos/(moedaspossiveis[i]);
        vcentavos=vcentavos%(moedaspossiveis[i]);
        printf("%d moeda(s) de R$ %.2f\n", moedas, moedaspossiveis[i]/100.0);
    }
 
    return 0;
}
