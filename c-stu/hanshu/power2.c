#include<stdio.h>


double power(double, int);

int main(int args, const char *argv[]){
	double rsl;
	double x=2;
	int n=4;  

	printf("%p %p\n", &x, &n);
	rsl = power(x, n);

	printf("%lf^%d=%lf\n", x, n, rsl);


	return 0;
}

double power(double a, int b)
{
	double r=1;
	int i=1;
	printf("%p %p\n", &a, &b);
	while (i<=b){
		r *= a;
		i++;
	}	
	return r;
}

