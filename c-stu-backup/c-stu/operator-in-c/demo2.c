#include<stdio.h>

int main(int args, char *argv[]){
	
	// int a=15,b=8,c;
	float a=15,b=8,c;

	c = a + b;
	printf(" c = %f \n", c);

	c = a - b;
	printf(" c = %f \n", c);

	c = a * b;
	printf(" c = %f \n", c);

	c = a / b;  // 取模
	printf(" c = %f \n", c);

	// c = a % b;  // 去余,浮点类型{float/double}的数据不能取余，否则报错
	// printf(" c = %f \n", c);

	return 0;
}
