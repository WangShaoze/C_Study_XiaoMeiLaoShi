#include<stdio.h>
#define UNI_WATER 3.0e-23
#define ONE_KUATUO_WATER 950

int main(int args, char *argcv[]){
	
	// 求水分子的个数
	
	float q, total;    // 700ml 毫升的水有700g
	
	printf("please input :");
	scanf("%f", &q);

	total=q*ONE_KUATUO_WATER/UNI_WATER;
	printf("%e\n", total);
	return 0;
}
