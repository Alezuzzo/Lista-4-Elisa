#include <stdio.h>

int main(){
    int i, j, n1, n2, x;

    printf("Informe um número:\n");
    scanf("%d", &n1);
    printf("Informe outro número:\n");
    scanf("%d", &n2);

    x = 0;

    for(int i=n1; i<=n2; i++){
      for(int j=0; j<=10; j++){
            printf("%d x %d = %d\n", i, j, x);
            x = (i * (j + 1));
            
                       
      }
      
      
      
      printf("\n"); //pula linha de uma coluna para a outra
}


    return 0;

}



