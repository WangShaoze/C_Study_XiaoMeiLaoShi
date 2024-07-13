#include<stdio.h>

int main(int args, char *argv[]){
	unsigned char x = 076,y = 0x89, z;
	z = x | y;
	printf("z is %#x\n", z);
	return 0;
}
