#include<stdio.h>
#define N 5


int main(int args, char *argv[]){
	char s[N];
	// scanf("%s", &s);  // 中间不能出现空格
	gets(s);  // 中间允许出现空格
	printf("%s\n", s);
	return 0;
}
