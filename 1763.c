#include<stdio.h>
#include <string.h>

int main()
{
    char nome[20],i;
    while(scanf("%s",&nome)!=EOF){
        if(strcmp(nome,"brasil")==0)
        printf("Feliz Natal!\n");
        else if(strcmp(nome,"alemanha")==0)
        printf("Frohliche Weihnachten!\n");
        else if(strcmp(nome,"austria")==0)
        printf("Frohe Weihnacht!\n");
        else if(strcmp(nome,"coreia")==0)
        printf("Chuk Sung Tan!\n");
        else if(strcmp(nome,"espanha")==0)
        printf("Feliz Navidad!\n");
        else if(strcmp(nome,"grecia")==0)
        printf("Kala Christougena!\n");
        else if(strcmp(nome,"estados-unidos")==0)
        printf("Merry Christmas!\n");
        else if(strcmp(nome,"inglaterra")==0)
        printf("Merry Christmas!\n");
        else if(strcmp(nome,"australia")==0)
        printf("Merry Christmas!\n");
        else if(strcmp(nome,"portugal")==0)
        printf("Feliz Natal!\n");
        else if(strcmp(nome,"suecia")==0)
        printf("God Jul!\n");
        else if(strcmp(nome,"turquia")==0)
        printf("Mutlu Noeller\n");
        else if(strcmp(nome,"argentina")==0)
        printf("Feliz Navidad!\n");
        else if(strcmp(nome,"chile")==0)
        printf("Feliz Navidad!\n");
        else if(strcmp(nome,"mexico")==0)
        printf("Feliz Navidad!\n");
        else if(strcmp(nome,"antardida")==0)
        printf("Merry Christmas!\n");
        else if(strcmp(nome,"canada")==0)
        printf("Merry Christmas!\n");
        else if(strcmp(nome,"irlanda")==0)
        printf("Nollaig Shona Dhuit!\n");
        else if(strcmp(nome,"belgica")==0)
        printf("Zalig Kerstfeest!\n");
        else if(strcmp(nome,"italia")==0)
        printf("Buon Natale!\n");
        else if(strcmp(nome,"libia")==0)
        printf("Buon Natale!\n");
        else if(strcmp(nome,"siria")==0)
        printf("Milad Mubarak!\n");
        else if(strcmp(nome,"marrocos")==0)
        printf("Milad Mubarak!\n");
        else if(strcmp(nome,"japao")==0)
        printf("Merii Kurisumasu!\n");

        else{
            printf("--- NOT FOUND ---\n");
        }
    }
    return 0;
}
