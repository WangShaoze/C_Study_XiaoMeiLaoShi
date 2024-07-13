#include<stdio.h>

int main(){
	
	int m =1;
	int rsl;
	rsl=m+m;
	
	// C 语言中的日志 可以通过 __FILE__, __FUNCTION__, __LINE__ 来获取文件信息，所处在那一个方法中，以及是那一行输出的日志
	printf("file:%s, function:%s, line: %d , result:%d\n", __FILE__, __FUNCTION__, __LINE__, rsl);
	return 0;

}
