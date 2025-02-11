#include <stdio.h>
#include <math.h> 

void insertionsort(float v[4]) {
    float aux;
    int j;
    for (int i = 1; i < 4; i++) {
        aux = v[i];
        j = i - 1;
        while (j >= 0 && v[j] > aux) {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = aux;
    }
}

int main() {
    float a, b, c, d;
    scanf("%f%f%f%f", &a, &b, &c, &d);
    float v[4] = {a, b, c, d};
    insertionsort(v);
    float epsilon = 0.00001;
    if (fabs(v[0] + v[3] - (v[1] + v[2])) < epsilon || fabs(v[0] + v[1] + v[2] - v[3]) < epsilon) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
