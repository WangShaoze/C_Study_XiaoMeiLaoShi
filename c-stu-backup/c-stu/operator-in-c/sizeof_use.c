#include<stdio.h>

int main(int args, char *argv[]){
	int a=5;
	long b=8;
	long long c=4124321432143214321;
	
	printf("%d %d %d\n", sizeof(a), sizeof(b), sizeof(c));	
	printf("%d %d %d\n", sizeof(int), sizeof(long), sizeof(long long));	
	return 0;
}
