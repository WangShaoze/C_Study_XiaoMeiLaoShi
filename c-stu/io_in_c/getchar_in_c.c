#include<stdio.h>


int main(int args, char *argv[]){

	int ch;

	printf("Enter you char:");
	ch = getchar();
	
	putchar(ch);
	printf("\t your input ch is %c , it value in ASSICC %d , it hex %#x \n", ch, ch, ch);
	
	return 0;
}
