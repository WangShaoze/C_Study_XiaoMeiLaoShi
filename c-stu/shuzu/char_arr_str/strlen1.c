#include<stdio.h>

int main(int argc, char *argv[]){
	char s1[] = "\tab\nc\vd\\e";
	char s2[] = "\x69\141";

	printf("%d\n", strlen(s1));
	printf("%d\n", sizeof(s1)/sizeof(char));
	printf(s1);

	printf("\n%d\n", strlen(s2));
	printf("%d\n", sizeof(s2)/sizeof(char));
	printf(s2);
	return 0;
}


