#include<stdio.h>


double x=2;
int n=4;  // 使用全局变变量给函数传参

double power();

int main(int args, const char *argv[]){
	double rsl;
	rsl = power();

	printf("%lf^%d=%lf\n", x, n, rsl);


	return 0;
}

double power()
{
	double r=1;
	int i=1;
	while (i<=n){
		r *= x;
		i++;
	}	
	return r;
}

