#include<stdio.h>

int main(int args, char *argv[]){
	int m =10;
	int *p;
	int **q;

	p = &m;
	q = &p;

	printf("p=%p q=%p\n", p, q);
	printf("p=%p q=%p\n", *q, q);

	// 通过p指针和q指针获取m的值
	printf("p get m:%d, q get m:%d, m get m:%d\n", *p, **q, m);

	return 0;
}

