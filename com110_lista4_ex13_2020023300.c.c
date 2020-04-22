#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y, c;

    printf("Informe o valor de um número:");
    scanf("%d", &x);
    printf("Informe o valor de outro número:");
    scanf("%d", &y);

    for(x >= y; y >= x; x++)
    {
        printf("%d\n", x);
    }
    for(x <= y; y <= x; y++)
    {
        printf("%d\n", y);
    }


    return 0;

}
