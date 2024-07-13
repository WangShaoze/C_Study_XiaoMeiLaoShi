#include<stdio.h>

int main(){

	char ch1,ch2;
	char a,b;

	ch1='A';
	// ch2=ch1+' ';
	ch2 = ch1+32;
	printf("ch1=%c ch2=%c \n", ch1, ch2);
	printf("ch1=%d ch2=%d \n", ch1, ch2);

	a = '0';
	b=a-48;
	printf("a=%d, b=%d \n", a, b);
	printf("a=%c \n", a);

	return 0;

}


