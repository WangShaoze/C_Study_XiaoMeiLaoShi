#include<stdio.h>
#include<string.h>

int main(int args, char *argv[]){
	char ch[60] = "Welcome";
	char *p1 = "Hello World";

	strcpy(ch, p1);
	//strcpy(p1, ch);

	// printf("%s \n", ch);
	puts(ch);
	// printf("%s \n", p1);
	puts(p1);
	return 0;
}

