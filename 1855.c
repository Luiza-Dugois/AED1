#include <stdio.h>

#define MAX 100

int main() {
    int largura, altura;
    char map[MAX][MAX];
    int visitado[MAX][MAX] = {0};

    scanf("%d%d", &largura, &altura);
    for (int i = 0; i < altura; i++) {
        scanf("%s", map[i]);
    }
  
    int x = 0, y = 0;
    char direction = '.';
    while (1) {
        if (x < 0 || x >= largura || y < 0 || y >= altura) {
            printf("!\n");
            return 0;
        }
        if (visitado[y][x]) {
            printf("!\n"); 
            return 0;
        }
      
        visitado[y][x] = 1; 
        char casaatual = map[y][x];
        if (casaatual == '*') {
            printf("*\n"); 
            return 0;
        } 
        else {
            if (casaatual == '>' || casaatual == '<' || casaatual == 'v' || casaatual == '^') {
                direction = casaatual; 
          } 
            else {
                if (casaatual != '.') {
                printf("!\n"); 
                return 0;
                }
            }
        }
        if (direction == '>') {
            x++;
        } 
        else {
            if (direction == '<') {
                x--;
            }
            else {
                if (direction == 'v') {
                    y++;
                }
               else {
                    if (direction == '^') {
                    y--;
                    }
                    else {
                    printf("!\n");
                    return 0;
                    }
              }
            }
        }
    }
    return 0;
}
