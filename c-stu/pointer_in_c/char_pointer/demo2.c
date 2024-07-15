#include<stdio.h>
#include<ctype.h>

int main(int args, char *argv[]){
	char str1[] = "Hello World";
	char str2[] = "Hello World";
	char *p;

	p = str1;
	if(isalpha(*p)){
		if(isupper(*p)){
			*p  = tolower(*p);
		}else{
			*p = toupper(*p);
		}
	}
	printf("%d %s\n", p, p);

	p = str2;
	printf("%d %s\n", p, p);

	return 0;
}

