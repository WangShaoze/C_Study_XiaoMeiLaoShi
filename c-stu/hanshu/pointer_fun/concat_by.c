#include<stdio.h>

char * concat_by(char * dest, const char * src, const char * other);

int main(int args, const char *argv[]){
	char dest[50] = "haha";
	char src[] = "good!";
	char ch[] = "$$";

	puts(concat_by(dest, src, ch));
	puts(dest);

	return 0;
}

char * concat_by(char * dest, const char * src, const char * other){
	char * p = dest;
	while(*p++);
	p--;
	while(*p++=*other++);	
	p--;
	while(*p++=*src++);
	return dest;
}
