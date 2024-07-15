#include<stdio.h>

int main(int args, char *argv[]){
	int a[3][2] = {{23, 12}, {34, 78}, {89, 67}};
	int n, i, *p;
	n = sizeof(a)/sizeof(int);

	printf("%p %p\n", a, a+1);
	printf("%p %p\n", a[0], a[0]+1);
	printf("%p %p\n", *a, *a+1);

	puts("");
	return 0;
}
