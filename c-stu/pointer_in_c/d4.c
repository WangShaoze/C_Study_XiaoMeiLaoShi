#include<stdio.h>


int main(int args, char *argv[]){
	int a[5] = {4, 8, 9, 3, 4};
	int *p, *q;

	p = a; // &a[0];
	printf("%p %d\n", p, *p);  
	
	// q = p++;  // p 先将之赋给 q 后作加1运算
	q = ++p;  // p 先做加1运算，再赋值给q

	printf("%p %d\n", p, *p);  
	printf("%p %d\n", q, *q);  
	
	return 0;
}
