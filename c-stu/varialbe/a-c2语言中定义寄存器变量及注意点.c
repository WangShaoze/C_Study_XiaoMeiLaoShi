#include<stdio.h>

int main(int args, char *argcv[]){
	
	register int a=10;   // 寄存器内部的变量是无法访问其地址
	// printf("register a is %d it adderss is %p\n", a, &a);
	printf("register a is %d \n", a);
	return 0;
}



