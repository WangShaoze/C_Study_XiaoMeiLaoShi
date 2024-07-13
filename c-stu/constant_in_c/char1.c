#include<stdio.h>

int main(){

	char ch1,ch2;
	char a,b;
	int c,d;

	ch1='A';
	ch2=ch1+' ';
	
	printf("ch1=%c ch2=%c \n", ch1, ch2);

	ch1=ch1+2;
	ch2 =ch1+' ';
	printf("ch1=%c ch2=%c \n", ch1, ch2);

	ch1='0';
	ch2=ch1+2;
	printf("ch1=%c ch2=%c \n", ch1, ch2);

	a=ch1-48;
	b=ch2-48;
	printf("a=%d, b=%d \n", a, b);

	c=ch1-48;
	d=ch2-48;
	printf("a=%d, b=%d \n", c, d);
	return 0;

}


