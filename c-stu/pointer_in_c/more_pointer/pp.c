#include<stdio.h>

int main(int args, char *argv[]){
	int m =10;
	int *p;
	int **q;
	
	p = &m;

	q = &p;

	printf("p -> %p --> %d\n", p, *p);
	printf("q -> %p --> %x\n", q, *q);

	printf("q -> %p --> %d\n", q, **q);


	printf("%p %p\n", q, q+1);

	return 0;
}

