#include<stdio.h>

int main(int args, char *argv[]){
	unsigned char x = 0x4, y = 1;
	printf("x=%#x y=%#x \n 将x左移1位后赋值给y:\n", x, y);
	y = x << 1;
	printf("x=%#x y=%#x \n", x, y);
	printf("x=%d y=%d \n", x, y);	
	x=y;

	printf("x=%#x y=%#x \n 将x左移1位后赋值给y:\n", x, y);
	y = x << 1;
	printf("x=%#x y=%#x \n", x, y);
	printf("x=%d y=%d \n", x, y);	

	return 0;
}
