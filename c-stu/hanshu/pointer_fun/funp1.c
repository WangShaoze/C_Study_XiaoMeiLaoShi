#include<stdio.h>

int add(int a, int b){
	return a+b;
}


int sub(int a, int b){
	return a-b;
}



int chu(int a, int b){
	return b/a;
}



int mul(int a, int b){
	return a*b;
}

int main(int args, const char *argv[]){
	int m=10, n=30;
	/*
	 * 定义和使用函数指针
	 * */
	int (*p) (int, int);
	p = add;
	printf("%d\n", add(m, n));
	printf("%d\n", (*p)(m, n));

	p = sub;
	printf("%d\n", (*p)(m, n));
	
	p = chu;
	printf("%d\n", (*p)(m, n));
	
	p = mul;
	printf("%d\n", (*p)(m, n));
	return 0;
}
