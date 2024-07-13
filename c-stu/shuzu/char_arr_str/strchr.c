#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]){
	char s1[] = "ni h$ao, kolss dsds ds$ds";	
	int ch;

	ch = '$';

	printf("%p %p \n", s1, strchr(s1, ch));
	printf("%p %p \n", s1, strrchr(s1, ch));

	printf("%ld\n", strchr(s1, ch)-s1);
	printf("%ld\n", strrchr(s1, ch)-s1);

	return 0;

}

