#include <stdio.h>
#include <string.h>


int qtdvit(char *alimento) {
    if (strcmp(alimento, "suco de laranja") == 0) return 120;
    if (strcmp(alimento, "morango fresco") == 0) return 85;
    if (strcmp(alimento, "mamao") == 0) return 85;
    if (strcmp(alimento, "goiaba vermelha") == 0) return 70;
    if (strcmp(alimento, "manga") == 0) return 56;
    if (strcmp(alimento, "laranja") == 0) return 50;
    if (strcmp(alimento, "brocolis") == 0) return 34;
    return 0; 
}

int main() {
    int T;
    while (1) {
        scanf("%d", &T); 
        if (T == 0) break; 

        int total = 0;
        for (int i = 0; i < T; i++) {
            int qtd;
            char alimento[50]; 
            scanf("%d ", &qtd); 
            fgets(alimento, sizeof(alimento), stdin);  
            alimento[strcspn(alimento, "\n")] = '\0';
            total += qtd * qtdvit(alimento); 
        }

        if (total < 110) {
            printf("Mais %d mg\n", 110 - total);
        } else if (total > 130) {
            printf("Menos %d mg\n", total - 130);
        } else {
            printf("%d mg\n", total);
        }
    }

    return 0;
}
