#include<stdio.h>

int main(int args, const char *argv[]){
	int a[2][3] = {{43, 2, 3},  {56, 57, 12}};
	int *p[2] = {a[0], a[1]};  // 指针数组的初始化方法也可以是这样的
	int i, j;

	printf("%p %p\n", a[0], a[1]);
	printf("%p %p\n", p[0], p[1]);  // 由此可以得出结论，这里的p指针几乎与a是等效的

	// 通过指针数组遍历该数组
	for (i=0; i<2; i++){
	
		for (j=0; j<3; j++){
			//printf("%d\n", p[i][j]);
			//printf("%d\n", *(*(p+i)+j));
			printf("%d\n", a[i][j]);
			//printf("%d\n", *(*(a+i)+j));
		}
	}
	

	return 0;
}

