#include<stdio.h>

char * del_space(char *);

int main(int args, const char *argv[]){
	char str[] = " how are you?";
	char * r;

	r = del_space(str);

	printf("str=%s\n", r);
	puts(str);

	return 0;
}

char * del_space(char * s){
	char * q = s;
	char *r = s;  // 保存字符数组的起始地址
	while (*s){
		if(*s != ' '){
			*q = *s;
			q++;
			s++;
		}else
			s++;
	}
	*q = '\0';
	return r;
}
