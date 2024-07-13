#include<stdio.h>


int main(int args, char *argv[]){

	int a =10;

	int *p, *q;
	
	double a1;
	double *pa1;
	pa1 = &a1;

	p = &a;
	//q = &a;
	q = p;

	printf("%p %p \n", p, &a);
	printf("&p: %p %ld\n", &p, sizeof(p));
	printf("%d %d %d\n", a, *p, *(&a));
	
	printf("%p %p \n", q, &a);
	printf("&p: %p %ld\n", &a, sizeof(q));
	printf("%d %d %d\n", a, *q, *(&a));
	
	
	printf("int %ld %ld\n", sizeof(int), sizeof(p));
	printf("double %ld %ld\n", sizeof(double), sizeof(pa1));
	return 0;
}
