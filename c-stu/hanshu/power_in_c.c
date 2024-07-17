#include<stdio.h>

double power(double, int);

int main(int args, const char *argv[]){
	double x, rsl;
	int n;
	printf("intput:");
	scanf("%lf%d", &x, &n);

	rsl = power(x, n);

	printf("%lf^%d=%lf\n", x, n, rsl);


	return 0;
}

double power(double x, int n)
{
	double r=1;
	int i=1;
	while (i<=n){
		r *= x;
		i++;
	}	
	return r;
}

