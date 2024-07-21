#include<stdio.h>
#include<string.h>

char * del_space(char *);

int main(int args, const char *argv[]){
	char str[] = " how are you?";
	char s[30], s1[30];

	strcpy(s1, strcpy(s, del_space(str)));

	printf("str=%s\n", str);
	printf("s=%s\n", s);
	printf("s1=%s\n", s1);

	return 0;
}

char * del_space(char * s){
	char * q = s;
	char *r = s;  // 保存字符数组的起始地址
	while (*s){
		if(*s != ' '){
			*q = *s;
			q++;
		}
		s++;
	}
	*q = '\0';
	return r;
}
