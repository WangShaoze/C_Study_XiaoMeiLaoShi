#include<stdio.h>

int main(int args, const char *argv[]){
	int a[3][2] = {{23,43}, {2, 44}, {56, 90}};
	int *p, n;

	n = sizeof(a)/sizeof(int);
	printf("%p %p\n", a, a+1);
	printf("%p %p\n", *a, *a+1);
	printf("%p %p\n", a[0], a[0]+1);
	printf("%d %d\n", *a[0], *(a[0]+1));

	return 0;
}

