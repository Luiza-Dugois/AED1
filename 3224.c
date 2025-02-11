#include <stdio.h>
#include <string.h>

int main() {
    char jon[1000], medico[1000];
    scanf("%s", jon); 
    scanf("%s", medico);
    if(strcmp(jon,medico)<=0) printf("go\n");
    else{
    printf("no\n");
    }
    return 0;
}
