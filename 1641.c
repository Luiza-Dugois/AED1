#include <stdio.h>
#include <math.h>

int main() {
    int r, i=0;
    scanf("%d", &r);
    while (r!=0) {
        int w, l, tam;
        scanf("%d%d", &w, &l);
        i++;
        tam=r*2;
        double diagonal;
        diagonal=(float)sqrt(pow(w,2)+pow(l,2));
        if(diagonal>tam) printf("Pizza %d does not fit on the table.\n", i);
        else{
            printf("Pizza %d fits on the table.\n", i);
        }
        scanf("%d", &r);
    }

    return 0;
}
