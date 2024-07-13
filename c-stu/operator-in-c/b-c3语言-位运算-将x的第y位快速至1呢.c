#include<stdio.h>

int main(int args, char *argv[]){
	unsigned char x = 0x14, y = 3;
	
	// 如何快速将x的第y位快速至1呢？
	x = x & (~(1 << (y-1)));
	printf("x=%#x y=%#x \n", x, y);	
	return 0;
}
