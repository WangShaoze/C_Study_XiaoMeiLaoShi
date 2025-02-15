#include<stdio.h>

char * itoa(char *p, int n);   // 通过指针p传递用户输入的数字，而不是申请静态变量来传递用户输入字符串

int main(int args, const char *argv[]){
	int n;
	char s[50], *r;

	printf("input:");
	scanf("%d", &n);

	r = itoa(s, n);

	puts(r);
	puts(s);
	retur 0;
}

char * itoa(char *p, int n){
	int r, i=0, j;
	// static char p[50];
	
	while(n){
		r = n % 10;
		n /= 10;
		p[i] = r+'0';
		i++;	
	}
	p[i] = '\0';      // 静态数组默认值就是\0, 这句代码其实可以不写。
	
	j = i-1; 
	i = 0;
	while(i<j){
		r = p[i];
		p[i] = p[j];
		p[j] = r;
		i++;
		j--;
	}	
	return p;
}
