#include<stdio.h>

int main(int args, const char *argv[]){
	int a[2][3] = {43, 2, 3,  56, 57, 12};
	int (*p)[3];	// 定义一个数组指针
	int *q[2];      // 定义一个指针数组q, 用于存放a的2个一维数组

	printf("%d\n", a[1][2]);

	// define a 数组指针来获取上面的a[1][2]值
	p = a;
	printf("%d %d\n", p[1][2], *(*(p+1)+2));

	q[0] = a[0];
	q[1] = a[1];
	// 遍历通过q指针获取a[0][1] 和 a[1][2] 的值
	printf("%d\n", *(q[0]+1));
	printf("%d\n", *(q[1]+2));
	

	return 0;
}

