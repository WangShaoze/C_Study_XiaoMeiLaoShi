#include<stdio.h>

int main(int args, char *argv[]){
	for(int i=1; i<=9; i++){
		for(int j=1; j<=i; j++){
			printf("%dx%d=%d\t", j, i, i*j);	
		}
		printf("\n");
	}
	return 0;
}
