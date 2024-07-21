#include<stdio.h>


// void swap(int,int);
void swap(int*, int*);

int main(int args, const char *argv[]){
	int a, b;
	a = 89;
	b = 1;
	printf("before:a=%d, b=%d\n", a, b);
	//swap(a,b);  // 这里属于复制传参，a,b 只存在于主函数中，内部的x,y是其他空间存储的最后不会再次传给a,b
	swap(&a, &b);
	printf("after:a=%d, b=%d\n", a, b);

	return 0;
}

/*
void swap(int x, int y){
	int t;
	t = x;
	x = y;
	y = t;
}
*/

void swap(int *p, int *q){
	int t= *q;
	*q = *p;
	*p = t;
}
