#include<stdio.h>

int get_sum(int *, int);

int main(int args, const char *argv[]){
	int a[] = {4,3,7,9,3,2,0,11};
	int sum;

	sum = get_sum(a, sizeof(a)/sizeof(int));
	printf("a->sum:%d\n", sum);

	return 0;
}

int get_sum(int * arr, int len)
{
	int rsl,i;
	rsl = 0, i=0;
	while(i<len){
		rsl += *(arr+i);
		i++;
	}
	return rsl;
}

