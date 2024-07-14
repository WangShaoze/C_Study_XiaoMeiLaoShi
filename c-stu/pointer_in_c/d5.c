#include<stdio.h>


int main(int args, char *argv[]){
	int a[5] = {4, 8, 9, 3, 4};
	int *p, *q;

	p = &a[4]; 
	printf("%p %d\n", p, *p);  
	
	//q = p--;
	q = --p;

	printf("%p %d\n", p, *p);  
	printf("%p %d\n", q, *q);  
	
	return 0;
}
