#include<stdio.h>

int fac(int);

int main(int args, const char *argv[]){
	int n, jiecheng;
	printf("input:");
	scanf("%d", &n);
	jiecheng = fac(n);
	printf("n jiecheng:%d\n", jiecheng);
	
	return 0;
}

int fac(int n){
	if(n==0||n==1){
		return 1;
	}
	return n*fac(n-1);
}
