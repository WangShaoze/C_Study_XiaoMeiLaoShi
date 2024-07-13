#include<stdio.h>
#include<math.h>

int main(){
	int n, tmp;
	int i;
	

	printf("please enter a number(n>3):\n");	
	scanf("%d", &n);

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
