#include <stdio.h>
#include <string.h>

int main() {
    float n1,n2,n3,n4 ,media, nexame;
    scanf("%f%f%f%f", &n1,&n2,&n3,&n4);
    media= ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10.0;
    printf("Media: %.1f\n", media);
    if(media>=7.0){
        printf("Aluno aprovado.\n");
    }
    else{
        if (media<5.0){
            printf("Aluno reprovado.\n");
        }
        else{
            printf("Aluno em exame.\n");
            scanf("%f", &nexame);
            printf("Nota do exame: %.1f\n", nexame);
            media=(media+nexame)/2.0;
            if(media>=5){
                printf("Aluno aprovado.\n");
            }
            else{
                printf("Aluno reprovado.\n");
            }
            printf("Media final: %.1f\n", media);
        }
    }
   
    return 0;
}
