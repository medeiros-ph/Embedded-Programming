#include<stdio.h>

int counter = 0;

int main(void){

	int *p_int;
	p_int = &counter;
	printf("O valor inicial de counter eh: %d\n", *p_int);

	while(*p_int < 21){
		++(*p_int);
		if((*p_int & 1) != 0){
			/* Do something when the counter is odd = ímpar*/
			printf("O valor de counter eh impar: %d\n", *p_int);
		}
		else{
			/* Do something when the counter is even = par*/
			printf("O valor de counter eh par: %d\n", *p_int);
		}
	}
		printf("While done!\n");
	return 0;
}

