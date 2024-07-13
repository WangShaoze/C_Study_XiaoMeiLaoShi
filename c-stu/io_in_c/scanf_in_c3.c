#include<stdio.h>


int main(int args, char *argv[]){

	int y,m,d, h, M, s;

	printf("Enter you datetime 中间使用空格连接:");
	scanf("%4d%2d%2d%*c%2d%2d%2d",&y, &m, &d, &h, &M, &s);	// %*c         * 是一个抑制符号 表示个变量不取
	printf("your input date is %d:%02d:%02d\n", y, m, d);
	printf("your input time is %02d:%02d:%02d\n", h, M, s);


	
	return 0;
}
