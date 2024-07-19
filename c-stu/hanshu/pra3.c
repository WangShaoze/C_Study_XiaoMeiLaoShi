#include<stdio.h>

void del_space(char *);

int main(int args, const char *argv[]){
	char s[] = "how are you?";
	printf("bf:%s\n", s);
	del_space(s);
	printf("af:%s\n", s);

	return 0;
}

void del_space(char * q)
{
	char * q1;
	q1 = q;

	//while(*q != '\0')
	while(*q)
	{
		if (*q==' '){
			q++;	
		}else{
			*q1 = *q;
			q1++;
			q++;
		}
	}
	*q1 = '\0';
}
