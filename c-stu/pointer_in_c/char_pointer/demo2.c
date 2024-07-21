#include<stdio.h>
#include<ctype.h>

int main(int args, const char *argv[]){
	char s1[] = "Hello world";
	char s2[] = "Hello world";
	char *p, *q;

	p = s1;
	q = s2;
	printf("p=%p, q=%p\n", p, q);

	if(isalpha(*p)){
		if (isupper(*p))
			*p = tolower(*p);
		else
			*p = toupper(*p);
	}
	printf("%p %s\n", p, p);

	p = s2;
	printf("%p %s\n", p, p);

	return 0;
}

