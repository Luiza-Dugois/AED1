#include <stdio.h>
#include <math.h>


double calculardist(int x1, int y1, int z1, int x2, int y2, int z2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
}

int main() {
    int n;
    int lista[10][3];
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%d%d%d", &lista[i][0], &lista[i][1], &lista[i][2]);
    }

    for (int i=0; i<n; i++) {
        double distanciaminima=-1;
        for (int j=0; j<n;j++) {
            if (i!=j) {
                double distancia=calculardist(
                    lista[i][0], lista[i][1], lista[i][2],
                    lista[j][0], lista[j][1], lista[j][2]
                );
                if (distanciaminima==-1 || distancia<distanciaminima) {
                    distanciaminima=distancia;
                }
            }
        }
        if (distanciaminima<=20) {
            printf("A\n");
        } 
        else {
            if (distanciaminima<=50) {
            printf("M\n");
            } 
            else {
            printf("B\n");
            }
        }
    }
    return 0;
}
