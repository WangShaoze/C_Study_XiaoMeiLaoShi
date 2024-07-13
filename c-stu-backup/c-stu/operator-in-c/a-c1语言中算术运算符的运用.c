#include<stdio.h>

int main(int args, char *argv[]){
	
	int a=15,b=8,c;

	c = a + b;
	printf(" c = %d \n", c);

	c = a - b;
	printf(" c = %d \n", c);

	c = a * b;
	printf(" c = %d \n", c);

	c = a / b;  // 取模
	printf(" c = %d \n", c);

	c = a % b;  // 去余
	printf(" c = %d \n", c);

	return 0;
}
