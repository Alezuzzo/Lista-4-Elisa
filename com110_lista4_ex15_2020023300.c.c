#include <stdio.h>

int main( ){

  int linha, coluna, n;

  printf("Valor:\n");
  scanf("%d", &n);

  printf("\n");
  linha = -1;
  while (linha < n)
  {
    printf( "\t" );
    coluna = -1;
    while (coluna < linha)
    {
      printf( "*" );
      coluna += 1;
    }
    printf( "\n" );
    linha += 1;
  }
  
  system("PAUSE");
  return 0;
  
}