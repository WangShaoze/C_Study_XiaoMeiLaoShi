#include<stdio.h>

int main(int args, char *argv[]){
	int a[] = {5, 23, 7};
	int *p[2] = {&a[0], &a[1]};
	int **q;
	
	// q = &p[0];
	q = p;
	printf("%d %d %d\n", a[0], *p[0], **q);
	printf("%d %d %d\n", a[1], *p[1], **(q+1));



	return 0;
}

