#include<stdio.h>

int main(int args, char *argv[]){
	int m =12;
	double  n = 3.14;
	void *p, *q;  // 定义p 和 q 两个void指针

	p = &m; // p = (void *)&m;

	//printf("%d %d\n", m, *p);
	printf("%d %d\n", m, *(int *)p);
	//printf("%d %d\n", n, *p);
	q = &n; // q = (void *)&n;
	printf("%.3lf %.3lf\n", n, *(double *)q);






	return 0;
}

