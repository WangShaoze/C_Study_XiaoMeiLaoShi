#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[]){
	char s1[] = "ni h$ao, kolss dsds ds$ds";	
	char subs[] = "dsds";
	char subs1[] = "$ao";

	printf("%ld\n", strstr(s1, subs)-s1);
	printf("%ld\n", strstr(s1, subs1)-s1);

	return 0;

}

