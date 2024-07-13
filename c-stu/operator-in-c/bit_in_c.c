#include<stdio.h>

int main(int args, char *argv[]){
	unsigned char x = 0x17,y;
	y = ~x;
	printf("y is %#x\n", y);
	return 0;
}
