#include<stdio.h>

int main(){

	int i, j;
	char ch = 'F';
	printf("please input a char:");
	scanf("%c", &ch);
	for (i=0; i<= ch-'A'; i++){
		for(j=0; j<i; j++){
			putchar('_');
		}	
		for(j=0; j<=i; j++){
			putchar(ch-j);
		}	
		putchar('\n');
	}
	return 0;
}
