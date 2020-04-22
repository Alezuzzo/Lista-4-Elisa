#include <stdio.h>
#include <math.h>

int main(){
    int x, g, n, n1;
    
    printf("Valor da potência:\n");
    scanf("%d", &n);

    n1 = 0;
    x = 3;
    
    while(n1 <= n){
        printf("%d\n", g);
        g = pow(x, n1);
        n1++;
    }
    
    return 0;
}