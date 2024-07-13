#include<stdio.h>


int main(int args, char *argv[]){
	
	// 本节主要是为了实现 回收垃圾字符
	int a;
	char x;


	printf("Enter you char:");
	scanf("%d", &a);	
	scanf(" %c", &x);	
	printf("the a is %d, the x is %c - %d\n", a, x, x);		
	return 0;
}
