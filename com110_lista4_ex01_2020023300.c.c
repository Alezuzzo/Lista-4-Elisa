#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int x, p, g;
  p = 0;

  printf("Informe um número:\n");
  scanf("%d", &x);

  g = x;

  do{
    printf("%d\n", g);
    g = pow(x, p);
    p++;
  }while(p <= 10);

  return 0;

}