#include<stdio.h>


int main(int args, char *argv[]){
	
	// 本节主要是为了实现 回收垃圾字符
	int a;
	char x;
	char ch;


	printf("Enter you char:");
	scanf("%d", &a);	
	ch = getchar();  // 回收上一次留下的垃圾字符\n
	scanf("%c", &x);	
	printf("the a is %d, the x is %c - %d , the ch is %c - %d \n", a, x, x, ch, ch);		
	return 0;
}
