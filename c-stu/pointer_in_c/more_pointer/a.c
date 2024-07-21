#include<stdio.h>

int main(int args, char *argv[]){
	char * s[] = {"hello", "hi", "good morning"};
	char **p;
	int n, i;

	n = sizeof(s)/sizeof(char *);
	printf("size of s[] %d\n", n);

	// 通过二级指针遍历字符串数组
	i =0;
	p = s;

	while (i<n){
		printf("%s\n", *(p+i));
		i++;
	}

	return 0;
}

