#include<stdio.h>

int main(int args, char *argv[]){
	int a[2][3] = {2,4,6, 1,3,5};
	int *p[2]; // define a pointer_arr
	
	p[0] = a[0];
	p[1] = a[1];

	printf("%d \n", a[0][1]);
	printf("%d \n", *(a[0]+1));
	printf("%d \n", *(p[0]+1));

	printf("%d \n", *(p[0]+2));
	printf("%d \n", *(p[1]+2));


	return 0;
}

