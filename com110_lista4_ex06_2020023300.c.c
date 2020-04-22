#include <stdio.h>
#include <stdlib.h>

int main(){
	double x, y, som, sub, mult, div;

	printf("Informe o valor de um número:\n");
	scanf("%lf", &x);

	printf("Informe o valor de outro número:\n");
	scanf("%lf", &y);

	som = x + y;
	sub = x - y;
	mult = x * y;
	div = x / y;

	printf("O valor da soma entre %.2lf e %lf é: %.2lf\n", x, y, som);
	printf("O valor da subtração entre %.2lf e %.2lf é: %.2lf\n", x, y, sub);
	printf("O valor do produto entre %.2lf e %.2lf é: %.2lf\n", x, y, mult);
	printf("O valor da divisão entre %.2lf e %.2lf é: %.2lf\n", x, y, div);

	return 0;

}