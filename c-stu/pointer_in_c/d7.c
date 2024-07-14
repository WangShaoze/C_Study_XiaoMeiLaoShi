#include<stdio.h>
#define N 5


int main(){
	int a[N];

	int *p, i;

	p = a;

	for (i=0; i<N; i++){
		scanf("%d", p++);	
	}

	p = a; // 最后一次输入后指针已经越界，需要重新赋值给p
	for (i=0; i<N; i++){
		printf("%d ", *p++);
	}
	puts("");
	return 0;
}
