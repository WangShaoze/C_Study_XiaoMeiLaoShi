#include<stdio.h>

void del_space(char *);

int main(int args, const char *argv[]){
	char s[] = "What's your name?";
	printf("bf:%s\n", s);
	del_space(s);
	printf("af:%s\n", s);
	return 0;
}

void del_space(char * s1)
{
	char * s2;
	s2 = s1;

	while (*s1){
		if(*s1 != ' '){
			*s2 = *s1;
			s1++;
			s2++;
		}else{
			s1++;
		}
	}
	
	*s2 = '\0';
}
