#include <stdio.h>
#include <stdint.h>

uint8_t 	u8a, u8b;
uint16_t	u16c, u16d;
uint32_t	u32e, u32f;

int8_t	s8;
int16_t	s16;
int32_t	s32;

int main(void){

	u8a =  sizeof(uint8_t);
	u16c = sizeof(uint16_t);
	u32e = sizeof(uint32_t);

	printf("size of uint8_t: %d Byte.\n", u8a);
	printf("size of uint16_t: %d Bytes.\n", u16c);
	printf("size of uint32_t: %d Bytes.\n", u32e);

	u8a	 = 0xa1U;
	u16c = 0xc1c2U;
	u32e = 0xe1e2e3e4U;

	printf("\n##########################\n\n");

	u8b		= u8a;
	u16d	= u16c;
	u32f	= u32e;

	printf("valor armazenado em  uint8_t: %d \n", u8b);
	printf("valor armazenado em  uint16_t: %d \n", u16d);
	printf("valor armazenado em uint32_t: %d \n", u32f);

	return 0;
}
