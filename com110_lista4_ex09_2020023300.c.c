#include <stdio.h>
#include <stdlib.h>

int main(){
    char matriz[6][22];
    int i, j;

    for (i = 0; i < 7; i++)
    {
        for(j = 0; j < 23; j++)
        {
            matriz [i][j] = ' ';
        }
    }

    for ( i = 0; i < 7; i++){
        for (j = 0; j < 23; j++)
        {
         if(i == 0)
         {
             matriz [i][j] = '#';

         }
         if(i == 3 && j == 5)
         {
             matriz [i][j] = 'S';
         }
         if(i == 3 && j == 6)
         {
             matriz [i][j] = 'E';
         }
         if(i == 3 && j == 7)
         {
             matriz [i][j] = 'J';
         }
         if(i == 3 && j == 8)
         {
             matriz [i][j] = 'A';
         }
         if(i == 3 && j == 9)
         {
             matriz [i][j] = ' ';
         }
         if(i == 3 && j == 10)
         {
             matriz [i][j] = 'B';
         }
         if(i == 3 && j == 11)
         {
             matriz [i][j] = 'E';
         }
         if(i == 3 && j == 12)
         {
             matriz [i][j] = 'M';
         }
         if(i == 3 && j == 13)
         {
             matriz [i][j] = '-';
         }
         if(i == 3 && j == 14)
         {
             matriz [i][j] = 'V';
         }
         if(i == 3 && j == 15)
         {
             matriz [i][j] = 'I';
         }
         if(i == 3 && j == 16)
         {
             matriz [i][j] = 'N';
         }
         if(i == 3 && j == 17)
         {
             matriz [i][j] = 'D';
         }
         if(i == 3 && j == 18)
         {
             matriz [i][j] = 'O';
         }
         if(i == 6)
         {
             matriz [i][j] = '#';
         }

        }
    matriz [i][0] = '#';
    }
    for(i = 0; i < 7; i++)
    {
        for(j = 0; j < 23; j++)
        {
            printf("%c", matriz [i][j]);
        }
        printf("\n");
    }

    system("PAUSE");
    return 0;
}
