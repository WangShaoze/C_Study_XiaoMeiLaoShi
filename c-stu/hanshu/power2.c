#include<stdio.h>


double power(double,int);

int main(int args, const char *argv[]){
	double rsl;
	double x;
	int n;

	printf("please input x and n(int n>=0):");
	scanf("x=%lf, n=%d", &x, &n);
	rsl = power(x, n);
	printf("your intput x=%lf, n=%d, power rsl=%lf\n", x, n, rsl);

	return 0;
}

double power(double q, int p){
	double r=1;
	int i=1;
	while(i++<=p)
		r *= q;
	return r;
}
