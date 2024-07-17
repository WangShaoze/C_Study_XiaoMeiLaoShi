#include<stdio.h>

int main(int args, char *argv[]){
	int a[] ={12, 89, 90, 188, 32, 67, 23};
	int i,n;
	void *p; 

	p = a; 
	n = sizeof(a)/sizeof(int);
	for(i=0; i<n; i++)
		printf("%d\t", *((int *)p+i));
	puts("");

	return 0;
}

