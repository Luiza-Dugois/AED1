#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    getchar();
    char a[20];
    for (int i = 0; i < n; i++) {
        fgets(a, sizeof(a), stdin);
        a[strcspn(a,"\n")]=0;
        if(strcmp(a,"P=NP")==0){
            printf("skipped\n");
        }
        else{
            int b,c;
            sscanf(a, "%d+%d", &b,&c);
            printf("%d\n", b + c);
        }
    }

    
    
    return 0;
}
