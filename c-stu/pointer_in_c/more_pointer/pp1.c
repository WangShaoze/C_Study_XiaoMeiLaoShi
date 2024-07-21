#include<stdio.h>

int main(int args, char *argv[]){
	int a[] = {12, 45, 90};
	int *p[2] = {&a[0], &a[2]};
	int **q;

	q = p;  // q = &p[0];
	
	// 获取a数组的第1个和第3个数
	printf("%d %d %d\n", a[0], *p[0], **q);
	printf("%d %d %d\n", a[2], *p[1], **(q+1));
	return 0;
}

