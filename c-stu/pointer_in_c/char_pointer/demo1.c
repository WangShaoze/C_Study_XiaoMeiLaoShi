#include<stdio.h>

int main(int args, char *argv[]){
	char ch = 'A';
	char *p;
	p = &ch;

	printf("%c %c \n", ch, *p);

	return 0;
}

