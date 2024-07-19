#include<stdio.h>

void swap(int x, int y);


int main(int args, const char *argv[]){
	int a = 10;
	int b = 23;

	printf("before: a=%d, b=%d\n", a, b);

	swap(a, b); // 尝试实现函数的交换功能
	
	printf("after: a=%d, b=%d\n", a, b); // 失败，没有成功实现a,b值的交换

	return 0;
}

void swap(int x, int y)
{
	int t;
	t = x;
	x = y;
	y = t;
}
