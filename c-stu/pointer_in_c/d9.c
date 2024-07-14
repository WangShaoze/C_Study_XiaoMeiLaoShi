#include<stdio.h>

int main(){
	int a[] = {3,5,90,32};
	int *p, *q, n, tmp;

	n = sizeof(a)/sizeof(int);
	p = a;
	// q = &a[n-1];
	q = a+n-1;	
	while (p<q){
		tmp = *p;
		*p++ = *q;
		*q-- = tmp;
	}

	p = a;
	// q = &a[n-1];
	q = a+n-1;
	while (p<=q){
		printf("%d ", *p++);
	}
	puts("");
	return 0;
}
