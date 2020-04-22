#include <stdio.h>

int main(){
  int n, menor = -1, maior = -1;

  do
  {
    printf("Informe um número:\n");
    scanf("%d", &n);

    if(n >= 0){
      menor = n;
      maior = n;
    }else if(n < menor){
      menor = n;
    }
  }while(n >= 0);
  if(menor == 0){
    printf("Nenhum número foi digitado.");
  }else{
    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);
    }

  return 0;
}