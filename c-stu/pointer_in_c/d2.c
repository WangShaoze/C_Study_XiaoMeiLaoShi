#include<stdio.h>


int main(int args, char *argv[]){
	int a=10, *p;
	double b=3, *q;

	p = &a;
	q = &b;

	printf("%p %p\n", p, p+2);  // p+2 的本质是 p+sizeof(int)*2
	printf("%p %p\n", q, q+2);  // q+2 的本质是 q+sizeof(double)*2
	return 0;
}
