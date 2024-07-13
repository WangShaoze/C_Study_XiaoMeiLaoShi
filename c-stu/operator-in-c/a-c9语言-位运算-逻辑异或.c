#include<stdio.h>

int main(int args, char *argv[]){
	unsigned char x = 75, y = 0173, z;
	z = x ^ y;
	printf("z is %#x\n", z);
	printf("z is %o \n", z);
	return 0;
}
