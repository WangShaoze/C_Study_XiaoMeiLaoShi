#include<stdio.h>

int deal_with(const char *);


int main(int args, const char *argv[]){
	char str[] = "how Are you 9967"; 
	int n;    // xiao xie zi mu de ge shu.

	// computer the number of a
	// A -> a
	n = deal_with(str);
	printf("n=%d\n", n);
	printf("str=%s\n", str);

	return 0;
}


int deal_with(const char *s)  // char *s = str  // 使用const 修饰表示不会修改str的内容
{
	int geshu;
	
	//while(*s != '\0')
	while(*s)
	{
		if (*s<= 'z' && *s >= 'a'){
			//*s = *s-32;
			geshu++;	
		}else if (*s<= 'Z' && *s >= 'A'){
			//*s = *s+32;
		}	
		s++;
	}	
	return geshu;
}
