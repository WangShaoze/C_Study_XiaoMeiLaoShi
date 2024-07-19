#include<stdio.h>

void swap(int *, int *);


int main(int args, const char *argv[]){
	int a = 10;
	int b = 23;

	printf("before: a=%d, b=%d\n", a, b);

	swap(&a, &b); // 使用指针的形式给函数传参 
	
	printf("after: a=%d, b=%d\n", a, b); 

	return 0;
}

void swap(int *x, int *y)
{
	int t;
	t = *x;
	*x = *y;
	*y = t;
}
