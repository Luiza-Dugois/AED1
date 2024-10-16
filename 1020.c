#include <stdio.h>

int main() {
    int num,anos, meses, dias, ranos;
      scanf("%d", &num);
      anos=num/365;
      ranos=num%365;
      meses=ranos/30;
      dias=ranos%30;
      printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, dias);
    
    return 0;
}
