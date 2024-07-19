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
	 * 定义和使用函数指针数组
	 * */
	int (*p[4]) (int, int);
	p[0] = add;
	printf("%d\n", add(m, n));
	printf("%d\n", (*p[0])(m, n));

	p[1] = sub;
	printf("%d\n", (*p[1])(m, n));
	
	p[2] = chu;
	printf("%d\n", (*p[2])(m, n));
	
	p[3] = mul;
	printf("%d\n", (*p[3])(m, n));
	return 0;
}
