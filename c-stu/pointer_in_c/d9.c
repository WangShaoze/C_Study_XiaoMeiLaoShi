#include<stdio.h>

int main(int args, const char *argv[]){
	int a[] = {34, 89, 90, 32, 2, 77, 82, 59};
	int *p, *q, n, tmp;

	n = sizeof(a)/sizeof(int);
	
	p = a;  
	printf("Before:\t");
	while(p<a+n){
		printf("%d\t", *p++);
	}
	puts("");

	p = a; // p=&a[0]; // 指针位置不对，需要调节到数组的初始位置
	q = a+n-1;

	// 实现数组的反转功能
	while (p<q){
		tmp = *p;
		*p++ = *q;
		*q-- = tmp;
	}

	/*
	 *查看
	 * */
	p = a;  // 指针位置不对，需要调节到数组的初始位置
	printf("After:\t");
	while(p<a+n){
		printf("%d\t", *p++);
	}
	puts("");


	return 0;
}

