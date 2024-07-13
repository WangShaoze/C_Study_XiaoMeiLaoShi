#include<stdio.h>
#include<string.h>
#define N 20

int main(int argc, char *argv[]){
	char str[N];
	int i,j,n,ch;

	printf("please input your str:");
	scanf("%s", str);
	//gets(str);

	n = strlen(str);
	i=0;
	j=n-1;
	while(i<j){
		ch = str[i];
		str[i] = str[j];
		str[j] = ch;
		i++;
		j--;
	}
	puts(str);
	return 0;

}


