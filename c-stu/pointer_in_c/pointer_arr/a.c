#include<stdio.h>

int main(int args, const char *argv[]){
	int a[2][3] = {{43, 2, 3},  {56, 57, 12}};
	int *p[2] = {a[0], a[1]};  // 指针数组的初始化方法也可以是这样的
	int i, j, sum;
	int * *q;  // 定义一个二级指针
		   // 指向p

	q = p;


	printf("total: %ld\n", sizeof(p));  // 每一个指针在本机上占用的字节数是8,p存储2个指针，共占有16个字节

	// 通过二级指针对a这个二维数组的所有元素求和
	// for 实现
	for (i=0; i<2; i++){
		for (j=0; j<3; j++){
			sum += *(*(p+i)+j);
		}
	}

	printf("sum=%d\n", sum);
	

	// 通过指针数组遍历该数组
	for (i=0; i<2; i++){
		for (j=0; j<3; j++){
			printf("%d\t", *(*(p+i)+j));
		}
		puts("");
	}
	

	return 0;
}

