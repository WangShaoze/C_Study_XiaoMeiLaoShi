#include<stdio.h>
#include<string.h>

int main(int args, const char *argv[]){
	char s[50] = "Welcome";
	char *p1 = "Hello world";

	//strcat(s, p1);
	//strcat(p1, s);  // error: 出现段错误，静态存储区的变量是不可以被修改的

	puts(s);
	puts(p1);

	return 0;
}

