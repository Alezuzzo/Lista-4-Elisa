#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int vei, max, p1, p2;

  printf("Velocidade do veículo:\n");
  scanf("%d", &vei);
  printf("Velocidade máxima da via:\n");
  scanf("%d", &max);

  p1 = max + (max * 0.2);
  p2 = max + (max * 0.5);

  if(vei <= max){
    printf("Não receberá multa.\n");
  }else if(vei == p1){
    printf("O valor da multa é R$ 85.13.\n");
  }else if(vei > p1 && vei <= p2){
    printf("O valor da multa é R$ 127.69.\n");
  }else if(vei > p2){
    printf("O valor da multa é R$ 574.62.\n");
  }

  return 0;

}
