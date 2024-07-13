#include<stdio.h>

int main(int args, char *argcv[]){
	
	// 变量作用域
	
	if(1){
		int a=2;
		printf("a inner is %d\n", a);
	}
	// printf("a out is %d\n", a);      // 默认的作用域是 auto 直接报错
	return 0;
}



