#include<stdio.h>

int main(){

	int i=1, sum=0;

	// loop:
	_lloop:
	if (i<=100){
		sum += i;
	//	printf("1+2+3+...+%d=%d\n", i, sum);
		i++;
	//	goto loop;
		goto _lloop;
	}
	printf("1+2+3+...+100=%d\n", sum);
	return 0;
}
