#include<stdio.h>

int main(int args, char *argv[]){
	int m = 10;
	int n = 34;
	const int * p; // 指针所指向的值不能修改
	int * const q = &m; // 指针不能修改	
	const int * const r = &m;  // 指针和指针所指向的值都不能修改
	p = &m;

	// (*p)++;   // error  const 指针指向的值不能修改
	
	// q = &m;  // error int * const 修饰的指针，指针不能修改，指针的初始化只能在定义的时候进行
	// q = &n;
	
	(*q)++;



	return 0;
}

