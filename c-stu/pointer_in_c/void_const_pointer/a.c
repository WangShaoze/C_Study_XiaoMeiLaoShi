
#include<stdio.h>

int main(int args, const char *argv[]){ 
	int m =10;
	int n =34;
	int x =40;


	const int *p;  // 指针所指向的值不可以修改
	int * const q = &m;  // q指针从初始化以后就不可以在修改，其值必须在初始化的时候就赋予
	const int * const r = &x; // 指针和指针所指向的值都不可以修改，其值必须在初始化的时候就赋予

	p = &n;

	printf("n=%d\n", *p);
	// 尝试修改n的值
	//*p = 22; // error
	
	// 尝试修改q指针
	//q++;

	// 尝试修改x的值
	//*r = 80;

	// 尝试修改r指针的值
	//r++;



	return 0;
}


