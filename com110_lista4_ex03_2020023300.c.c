#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int escolha, p;

  p = 3;

  do{
    printf("Escolha uma opção:\n - Digite 1.\n - Digite 2.\n - Digite 3.\n\n");
    scanf("%d", &escolha);
    
    if(escolha == 1){
      printf("Escolheu 1.\n\n");
    }else if(escolha == 2){
      printf("Escolheu 2.\n\n");
    }else if(escolha == 3){
      printf("Escolheu 3.\n\n");
    }else if(escolha > 3 | escolha < 1){
      printf("Escolha inválida.\n\n");
    }
    
  }while(escolha <= 3 && escolha >= 1);
  
  return 0;

}