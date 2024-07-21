#include<stdio.h>

int main(int args, const char *argv[]){
	int a[3][2] = {{23,43}, {2, 44}, {56, 90}};
	int (* p)[2],i,j;  // 定义数组指针
	p = a;
	
	printf("%p %p\n", a, a+1);
	printf("%p %p\n", p, p+1);

	printf("%d %d %d %d\n", a[2][1], p[2][1], *(*(a+2)+1), *(*(p+2)+1));


	// 通过数组指针遍历这个二维数组
	for(i=0; i<3;i++){
		for(j=0; j<2;j++)
			printf("%d\t", *(*(p+i)+j));
		puts("");
	}
	return 0;
}

