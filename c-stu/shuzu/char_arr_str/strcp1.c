#include<stdio.h>
#include<string.h>
#define N 20

int main(int argc, char *argv[]){
	char src[] = "banana";	
	char desc[N];

	//strcpy(desc, src);
	int i=0;
	
	while(i<=strlen(src)){
		desc[i] = src[i];
		i++;
	}


	puts(src);
	puts(desc);

	return 0;

}


