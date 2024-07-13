#include<stdio.h>
#define G1 90
#define G2 80
#define G3 70
#define G4 60
#define G5 0

int main(){
	float s; 
	printf("请输入分数:");
	scanf("%f", &s);
	// 判断是否合法
	if(!(s>=G5 && s <= G1+10)){
		printf("你输入的分数不再合法范围内！\n");
		return 0;	
	}

	printf("your score is %2.3f\n", s);
	// 输出等级
	if (s >= G1){
		if (s == G1+10){
			printf("A-ACE!\n");
		}else{
			printf("A-Great!\n");
		}
	}else if (s >= G2)
		printf("B-Good!\n");
	else if (s >= G4){
		if ( s>= G3 ){
			printf("C-Well!\n");
		}else{
			printf("C-Not Bad!\n");
		}
	}
	else{
		printf("D\n");
	}
	return 0;
}
