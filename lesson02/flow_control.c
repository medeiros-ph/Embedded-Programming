#include<stdio.h>

int main(void){

	int counter = 0;
	printf("O valor inicial de counter eh: %d\n", counter);

	while(counter < 21){
		++counter;
		if((counter & 1) != 0){
			/* Do something when the counter is odd = ímpar*/
			printf("O valor de counter eh impar: %d\n", counter);
		}
		else{
			/* Do something when the counter is even = par*/
			printf("O valor de counter eh par: %d\n", counter);
		}
	}
		printf("While done!\n");
	return 0;
}
