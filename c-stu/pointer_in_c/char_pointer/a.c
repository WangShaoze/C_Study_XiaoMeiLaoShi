#include<stdio.h>

int main(int args, const char *argv[]){
	char s[30] = "Welcome";
	char *p = "Hello world", *q;
	int i=0;

	q = p;

	while(*(s+i))
		i++;
	
	while(*q){
		*(s+i) = *q;
		q++;
		i++;
	}
	*(s+i) = *q;  // 最后需要将p指向的字符串的结束符号\0拷贝过来
	
	puts(p);
	puts(s);	


	return 0;
}

