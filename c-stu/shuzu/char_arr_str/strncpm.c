#include<stdio.h>
#include<string.h>
#define N 20

int main(int argc, char *argv[]){
	char s1[] = "Quit";	
	char s2[] = "quit";
	char s3[] = "quit\n";

	printf("strcmp %d\n", strcmp(s3, s2));
	printf("strncmp %d\n", strncmp(s3, s2, 4));
	printf("strcasecmpi %d\n", strcasecmp(s1, s2));

	return 0;

}


