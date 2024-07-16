#include<stdio.h>

int main(int args, char *argv[]){
	char * s[] = {"apple", "pear", "watermalen"};
	char **p;
	int i,n;

	i=0;
	n = sizeof(s)/ sizeof(char *);
	p = s; // p = &s[0];
	while (i<n){
		printf("%s %s\n", s[i], *(p+i));
		i++;
	}

	return 0;
}

