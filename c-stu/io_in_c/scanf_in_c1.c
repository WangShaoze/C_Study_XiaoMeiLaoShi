#include<stdio.h>


int main(int args, char *argv[]){

	int ch, n;

	printf("Enter you char:");
	//scanf("%d", &ch);	
	n = scanf("%x", &ch);	
	printf("your input content is %d , argv number is %d.\n", ch, n);

	
	return 0;
}
