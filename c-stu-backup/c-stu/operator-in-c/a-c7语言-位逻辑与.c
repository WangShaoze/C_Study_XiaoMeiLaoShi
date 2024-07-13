#include<stdio.h>

int main(int args, char *argv[]){
	unsigned char x = 0126,y = 0xac, z;
	z = x & y;
	printf("z is %#x\n", z);
	return 0;
}
