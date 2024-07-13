#include<stdio.h>

int main(int args, char *argcv[]){
	
	int i=0;

	while (i<5){
		// int a=1;
		// static int a;  // 如果补给值，那么默认值是0；申明语句只有一次生效
		static int a=3;                        // 从运行结果可以得出结论: static 修饰的变量默认值是0,声明之后且一直要到程序结束才会销毁，中间阶段再次声明，语句不会生效
		printf("a is %d \n", a);
		a++;
		i++;
	}
	return 0;
}



