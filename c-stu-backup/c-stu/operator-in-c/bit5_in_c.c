#include<stdio.h>

int main(int args, char *argv[]){
	unsigned char x = 0xe4, y = 1;
	printf("x=%#x y=%#x \n 将x左移三位后赋值给y:\n", x, y);
	y = x << 3;
	printf("x=%#x y=%#x \n", x, y);
	return 0;
}
