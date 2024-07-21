#include<stdio.h>
#include<stdlib.h>

int compare(const void *, const void *);  // 定义快速排序的比较规则

int main(int args, const char *argv[]){
	int s[] = {30, 2, 4, 78, 33, 55, 41, 89, 68}, n, i;
	n = sizeof(s)/sizeof(int);

	qsort(s, n, sizeof(int), compare);

	for(i=0; i<n; i++){
		printf("%d\t", *(s+i));
	}
	puts("");
	return 0;
}

int compare(const void * p, const void * q){
	return *(int *)p - *(int *)q;	
}
