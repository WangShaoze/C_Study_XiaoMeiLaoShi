#include<stdio.h>


int main(){
	
	float score=0;
	printf("please input score:\n");
	scanf("%f", &score);

	if (!(score >= 1 && score <= 100)){
		printf("你的输入不合法！！分数在[1,100]\n");
	}else{
		switch((int) score/10){
			case 10:
			case 9:
				printf("A-Ace!\n");	
				break;
			case 8:
				printf("B-excellent!\n");	
				break;
			case 7:
			case 6:
				printf("C-Good!\n");	
				break;
			default:
				printf("D-Not pass!\n");

		}	
	
	}
	return 0;
}
