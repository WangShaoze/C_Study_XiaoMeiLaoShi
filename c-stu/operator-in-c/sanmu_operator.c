#include<stdio.h>

int main(int args, char *argv[]){
	int x = 70, y = 10;

	// y = x++ > 70 ? x+y : 0;
	y = ++x > 70 ? x+y : 0;
	// printf("x++ x=%d, y=%d \n", x, y);
	printf("++x x=%d, y=%d \n", x, y);
	return 0;
}
