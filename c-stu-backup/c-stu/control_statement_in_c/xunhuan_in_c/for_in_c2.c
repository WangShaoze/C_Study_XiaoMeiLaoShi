#include<stdio.h>

int main(){
	int i=0, sum=0;
	for (; ; ){
		sum += i;
		i++;
		if(i>100){
			break;
		}
	}	
	printf("1+2+3+...+100=%d\n", sum);
	return 0;
}
