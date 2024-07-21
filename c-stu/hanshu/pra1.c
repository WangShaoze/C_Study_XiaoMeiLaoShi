#include<stdio.h>

int deal_with(char *);

int main(int args, const char *argv[]){
	char str[] = "Can I do? 9967";
	int n;  // 统计小写字母的数量

	// 实现统计小写字母的数量并且将小写字母转化位大写字母
	n = deal_with(str);
	printf("n=%d, s=%s\n", n, str);

	return 0;
}

int deal_with(char * s){
	int num;

	
	//while (*s)
	while (*s!='\0')
	{
		if (*s<='z' && *s >= 'a'){
			num++;
			*s = *s-32;   
		}
		s++;
	}
	return num;
}
