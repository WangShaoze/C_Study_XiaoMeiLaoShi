#include<stdio.h>


int main(int args, char *argv[]){
	
	int n = 0, sum = 0;
	while (n++ < 100){
		printf("sum add n, n = %d, sum = %d . \n", n, sum);
		sum += n;	
	}
	printf("sum is %d \n", sum);

	return 0;
}
