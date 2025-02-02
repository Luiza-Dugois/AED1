#include <stdio.h>

int main(){
    int H, E, A, O, W, X, evil=0, good=0;
    scanf("%d", &H);
    scanf("%d", &E);
    scanf("%d", &A);
    scanf("%d", &O);
    scanf("%d", &W);
    scanf("%d", &X);
    good=H+E+A+X;
    evil=O+W;
    if(good>evil){
        printf("Middle-earth is safe.\n");
    }
    else{
        printf("Sauron has returned.\n");
    }
    
    return 0;
}
