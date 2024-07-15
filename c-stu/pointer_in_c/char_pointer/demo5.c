#include<stdio.h>
// #include<string.h>

int main(int args, char *argv[]){
	char ch[60] = "Welcome";
	char *p1 = "Hello World", *q1;

	// strcat(ch, p1);
	int i=0;
	
	q1 = p1;
	while (*(ch+i) != '\0'){
		i++;	
	}


	while (*q1 != '\0'){
		*(ch+i) = *q1;
		q1++;
		i++;
	}
	*(ch+i) = *q1;

	puts(ch);
	puts(p1);
	return 0;
}

