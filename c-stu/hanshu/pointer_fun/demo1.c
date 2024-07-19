#include<stdio.h>
#include<string.h>

char * my_str();

int main(int args, const char *argv[]){
	printf("%s\n", my_str());
	return 0;
}

char * my_str(){
	// char s[20];  //error: auto 变量只在作用域内有效
	//                  修改方式: 1.使用全局变量
	//                  	      2.将变量放到静态存储区
	//                  	      3.使用字符串常量，需要注意: 如果使用了字符串常量后面不能修改
	//                  	      4.动态内存(内存的销毁由程序员自己控制)
	static char s[20];
	strcpy(s, "hello");
	return s;
}
