#include<stdio.h>
#include<string.h>
#define N 20

int main(int argc, char *argv[]){
	char str[N];
	int i, n;

	printf("please input your str:");
	// scanf("%s", str);
	gets(str);

	// n = sizeof(str)/sizeof(char);
	n = strlen(str);
	printf("n = %d \n", n);
	for (i=n-1; i>=0; i--){
		putchar(str[i]);	
	}
	putchar('\n');
	return 0;

}


