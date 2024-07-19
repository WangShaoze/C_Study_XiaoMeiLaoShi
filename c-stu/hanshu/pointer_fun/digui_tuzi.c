#include<stdio.h>

int fib(int);

int main(int args, const char *argv[]){
	int n=1, yvefen;
	printf("input:");
	scanf("%d", &yvefen);

	while(n <= yvefen){
		printf("%d\t", fib(n));
		n++;
	}
	puts("");
	return 0;
}

int fib(int n){
	if(n==2||n==1){
		return 1;
	}
	return fib(n-1)+fib(n-2);
}
