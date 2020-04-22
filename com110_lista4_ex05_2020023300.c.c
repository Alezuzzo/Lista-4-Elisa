#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 60 segundos em 1 minuto.

int main(){
  int m, s;

  printf("Informe o valor em minutos:\n");
  scanf("%d", &m);

  s = 60 * m;


  printf("Existem %d segundos em %d minutos.", s, m);

  return 0;

}