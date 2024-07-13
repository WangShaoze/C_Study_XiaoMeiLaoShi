#include<stdio.h>
#define ONE 1
#define TWO (ONE+ONE)

int main(int argc, char *argv[]){

	int a=10, b=20,c;

	c = a+b*TWO+a*ONE;

	printf("c = %d\n", c);
	return 0;
}


