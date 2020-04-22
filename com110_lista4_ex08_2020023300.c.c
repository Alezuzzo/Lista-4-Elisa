#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int h, p;

  printf("Diga quantas horas são em formato 24 horas (0 a 24):\n");
  scanf("%d", &h);

  do{
    if(h > 24){
      printf("Formato inválido.\n");
    }else if(h >= 5 && h <= 11){
      printf("Está de manhã.\n");
    }else if(h >= 12 && h <= 17){
      printf("Está de tarde.\n");
    }else if(h >= 18 || h <= 4){
      printf("Está de noite.\n");
    }
  }while(h < 0);

  return 0;
}
