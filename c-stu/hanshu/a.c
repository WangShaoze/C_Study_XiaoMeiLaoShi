#include<stdio.h>

void del_space(char *);

int main(int args, const char *argv[]){
	char str[] = "hello                    world!     This is a big SMARTER.      ";
	printf("bf: str=%s\n", str);
	del_space(str);
	printf("af: str=%s\n", str);
	return 0;
}

del_space(char *s){
	char *p;
	p = s;
	while (*s){
		if(*s!=' '){
			*p = *s;
			p++;
		}
		s++;
	}
	*p = '\0';
}
