#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, y, z;

    x = 1;
    y = 20;
    z = 1;

    while(x <= 20){
        do{
        printf("%d\n", x);
        x++;}while(x <= 20);
        while(y >= 1){
            printf("%d\n", y);
            y--;
        }
        do{
        printf("%d\n", z);
        z = z + 2;
        }while(z <= 20);
    }


    return 0;

}
