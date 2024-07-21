#include<stdio.h>

int fac(int);

int main(int args, const char *argv[]){
	int n, rsl;

	printf("if you want to get jiecheng of number, please input n:\n");
	scanf("%d", &n);
	rsl = fac(n);
	printf("jiechneg n:%d\n", rsl);



	return 0;
}

int fac(int x){
	if (x==0||x==1)
		return 1;
	return x*fac(x-1);
}
