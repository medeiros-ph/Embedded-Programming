#include<stdio.h>

unsigned fact(unsigned n);

int main(void){
	
	printf("Insira o numero para calcular o fatorial: 	");
	int fator;
	scanf("%d", &fator);	
	int	valor = fact(fator);
	printf("O valor fatorial de %d, eh: %d/n", fator, valor);
	
	return 0;
}

unsigned fact(unsigned n){
	// 0! = 1
	// n! = n*(n-1)! 		for n > 0
	if (n == 0U){
		return 1U;
	}
	else{
		return n * fact(n - 1U);
	}
}
