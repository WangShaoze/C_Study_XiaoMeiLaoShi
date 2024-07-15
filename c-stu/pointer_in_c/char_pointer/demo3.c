#include<stdio.h>

int main(int args, char *argv[]){
	char *p1 = "Hello World";
	char *p2 = "Hello World";

	// *p1 -= 32;  // error 字符串常量，和 static 修饰的变量 以及全局变量都是放在静态存储区的，不可以直接修改 || 其他变量是放在栈中的
	printf("&p1=%p %p %s\n", &p1, p1, p1);
	printf("&p2=%p %p %s\n", &p2, p2, p2);

	return 0;
}

