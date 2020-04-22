#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float m, a, i;

	printf("Informe o valor de sua altura:\n");
	scanf("%f", &a);
	printf("Informe seu peso:\n");
	scanf("%f", &m);

	i = m / pow(a, 2);

	printf("Seu IMC é igual a: %.2f\n", i);
	return 0;

}
