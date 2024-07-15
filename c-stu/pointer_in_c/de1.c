#include<stdio.h>

int main(int args, char *argv[]){
	int a[3][2] = {{23, 12}, {34, 78}, {89, 67}};
	int n, i, *p;
	n = sizeof(a)/sizeof(int);
	
	// a[1]++; // error 
	printf("%ld\n", sizeof(a[1]));  // a[1] 是一个地址常量表示二维数组名

	p = &a[0][0];  // &a[0];
	printf("%p %p\n", p, p+1);
	printf("%p %p\n", a, a+1);

	for(i=0; i<n;i++)
		printf("%d ", *(p+i));
	puts("");
	return 0;
}
