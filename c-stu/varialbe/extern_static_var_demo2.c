#include<stdio.h>

extern int global_a;
int main(int args, char *argv[]){
	printf("the global_a is %d \n", global_a);
	return 0;
}

