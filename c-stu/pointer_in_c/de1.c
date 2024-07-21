#include<stdio.h>

int main(int args, const char *argv[]){
	int a[3][2] = {{3, 4}, {5, 6}, {8, 10}};
	int n, i, *p;

	n = sizeof(a)/sizeof(int);

	printf("n=%d\n", n); // n是代表这个二维数组空间中能存int类型数据的个数 

	// a[1]++;  // error a[1] 代表二维数组的第二个数组的数组名也就其地址常量，是不能修改的
	
	printf("%ld\n", sizeof(a[1]));  // 8 

	// 对比
	p = &a[0][0];
	printf("%p %p\n", p, p+1); // p+1后移动了4个字节，也就是一个int
	printf("%p %p\n", a, a+1);  // a+1 后的移动了8个字节，也就是内部的一个数组

	// 所以可以通过P指针来遍历整个二维数组
	for (i=0; i<n; i++)
		printf("%d\t", *(p+i));
	puts("");

	return 0;
}

