#include<stdio.h>

int main(int args, char *argv[]){
	int a=65, b=0;

	// 如何利用位运算将 十进制 ----> 十六进制 ？
	printf("a = %#x %d \n", a, a);
	
	// b=a/16;
	b = a >> 4;           
	printf("b = %#x %d \n", b, b);

	// b=a%16;
	b = a & 0xf; 
	printf("b = %#x %d \n", b, b);
	
	return 0;
}
