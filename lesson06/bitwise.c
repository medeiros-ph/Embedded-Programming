#include<stdio.h>

int main(void){
	int x = 1024;
	int y = -1024;
	int z;

	z = x >> 3;
	printf("Valor de z: %d\n", z);
	z = y >> 3;
	printf("Valor de z: %d\n", z);

	return 0;
}
