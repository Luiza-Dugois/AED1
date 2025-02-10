#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    for (int i=0; i<t; i++){
        int pa, pb, ano=0;
        double g1,g2;
        scanf("%d%d", &pa, &pb);
        scanf("%lf%lf", &g1, &g2);
        while(pa<=pb){
            pa+=(int)(pa*(g1/100));
            pb+=(int)(pb*(g2/100));
            ano++;
            if(ano>100) {
                printf("Mais de um seculo.\n");
                break;
            }
        }
        if(ano<=100){
            printf("%d anos\n", ano);
        }
    }
    
    return 0;
}
