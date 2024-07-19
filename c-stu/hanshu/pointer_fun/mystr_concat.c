#include<stdio.h>

char * my_concat(char * dest, const char * src);

int main(int args, const char *argv[]){
	char dest[50] = "welcome to ";
	char src[] = "skate club";

	puts(my_concat(dest, src));
	puts(dest);

	return 0;
}

char * my_concat(char * dest, const char * src){
	char * p = dest;

	while(*p++);
	p--;
	while(*p++=*src++);
	
	/*//way2:
	while(*p++);
	p--;
	while(*src){
		*p++ = *src++;
	}
	*p = '\0'; 
	*/
	

	/*//way1:
	while (*p){
		p ++;
	}

	while(*src){
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';
	*/
	return dest;
}
