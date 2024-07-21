#include<stdio.h>
#include<ctype.h>

int main(int args, const char *argv[]){
	char *p1 = "Hello world";
	char *p2 = "Hello world";

	printf("*p1=%d, ch 格式:%c\n", *p1, *p1);
	// 尝试修改*p1
	/*
	
	*p1 -= 32;  // error, 原因:
		    		//  这里的p指向的是一个字符串常量
				//  字符串常量 / static 修饰的变量 / 全局变量 --> 都是放在静态存储区的	
				//  静态存储区中的变量需要到程序运行结束后才会被销毁，而其他变量是放在栈中的 
	*/

	printf("&p1=%p %p %s\n", &p1, p1, p1);
	printf("&p2=%p %p %s\n", &p2, p2, p2);  // p1 和 p2 的所指向的地址相同，所以在静态存储区中相同的字符串常量是不存在的,即 字符串常量唯一 


	return 0;
}

