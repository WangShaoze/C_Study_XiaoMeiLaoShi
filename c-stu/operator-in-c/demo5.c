#include<stdio.h>

int main(int args, char *argv[]){
	
	int a = 5, b = 18, c = 0;

	if ((a-5)>0 || b != 8)
		printf("true:%d %d %d \n", a, b, c);
	else
		printf("false:%d %d %d \n", a, b, c);
	return 0;
}
