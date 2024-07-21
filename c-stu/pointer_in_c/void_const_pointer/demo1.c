
#include<stdio.h>

int main(int args, char *argv[]){
	int m=12;
	double n=3.1415;
	void *p, *q;    // 定义void指针

	/*
	p = &m;
	printf("%d %d\n", m, *(int *)p);
	*/

	p = (int *) &m;
	printf("%d %d\n", m, *(int *)p);


	q = (double *)&n;
	printf("%.3lf %.3lf\n", n, *(double *)q);


	return 0;
}

