#include<stdio.h>

int main(){
	int a= 0x12345678;
	printf("%d %x %o \n", a, a, a);

	float e=3.5e+10;
	printf("%e %f \n", e, e);

	float b=3.5e-10;
	printf("%e %f \n", b, b);
	return 0;

}


