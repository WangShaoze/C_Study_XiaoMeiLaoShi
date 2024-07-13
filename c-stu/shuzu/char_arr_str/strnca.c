#include<stdio.h>
#include<string.h>
#define N 20

int main(int argc, char *argv[]){
	char src[] = "banana";	
	char desc[N] = ".com.cn";

	// strcat(src, desc);
	// strcat(desc, src);
	// strncat(desc, src, 4);
	strncat(src, desc, 4);
	puts(src);
	puts(desc);

	return 0;

}


