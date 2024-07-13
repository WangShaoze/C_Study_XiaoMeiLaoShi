#include<stdio.h>
#include<math.h>


int main(int args, char *argv[]){
	// 输出 a b c  --------------> y = ax^2 + bx + c
	
	int a,b,c;
       	float x1, x2;
       	float dlt;

	printf("请输入a对应的值:\n");
	scanf("%d", &a);
	printf("请输入b对应的值:\n");
	scanf(" %d", &b);
	printf("请输入c对应的值:\n");
	scanf(" %d", &c);

	printf("a=%d, b=%d, c=%d\n", a, b, c);
	
	dlt = b*b - a*c*4;

	printf("dlt=%4.3f\n", dlt);
	if(dlt>0){
		x1 = ((1-b)+sqrt(dlt))/(2*a);
		x2 = ((1-b)-sqrt(dlt))/(2*a);
		printf("dlt > 0, x1 = %6.4f , x2=%6.4f\n", x1, x2);
	}else if(dlt == 0){
		x1 = (1-b)/(2*a);
		x2 = (1-b)/(2*a);
		printf("dlt = 0, x1 = %6.4f , x2=%6.4f\n", x1, x2);
	}else {
		printf("dlt 小于0 该一元二次函数无实数解.\n");
	}
	return 0;
}
