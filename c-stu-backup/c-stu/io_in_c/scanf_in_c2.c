#include<stdio.h>


int main(int args, char *argv[]){

	int y,m,d;

	printf("Enter you date:");
	scanf("%4d%2d%2d",&y, &m, &d);	
	printf("your input date is %d:%02d:%02d\n", y, m, d);

	
	return 0;
}
