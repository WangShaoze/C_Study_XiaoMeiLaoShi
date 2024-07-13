#include<stdio.h>
#include<math.h>

int main(){
	int n, tmp;
	int i;
	
	loop:
	printf("please enter a number(n>3):\n");	
	if(scanf("%d", &n) == 0){
		printf("input error\n");	
		getchar();
		goto loop;
	} 
	tmp = sqrt(n);
	
	i = 2;
	while (i<= tmp){
		if(n % i == 0){
			break;
		}
		i++;
	}
	if(i<= tmp){
		printf("%d 不是素数\n", n);
	}else{
		printf("%d 素数\n", n);
	}	
	return 0;
}
