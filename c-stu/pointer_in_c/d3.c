#include<stdio.h>


int main(int args, char *argv[]){
	int a[5] = {4, 8, 9, 3, 4};
	int *p, *q;

	p = a; // &a[0];
	q = &a[3];

	printf("%p %p\n", p, q);  
	printf("%d %d\n", *p, *q);   // 取出该地址对应的值
	printf("%ld\n", q-p); // 获取p到q的个数差
	return 0;
}
