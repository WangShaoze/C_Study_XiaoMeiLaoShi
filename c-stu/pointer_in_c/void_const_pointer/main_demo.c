
#include<stdio.h>

int main(int args, const char *argv[]){ // const char *argv[]  argv 是字符指针数组
					// const char *argv[] = {"./a.out", "192.168.14.3", "8080"};
					// args 外部传入的参数个数，默认1个就是文件名
	printf("args=%d\n", args);

	for (int i=0; i<args; i++){
		printf("%s\t", *(argv+i));
	}
	puts("");


	*(argv+1) = "xiaoGui";
	for (int i=0; i<args; i++){
		printf("%s\t", *(argv+i));
	}
	puts("");
	
	printf("%p %s\n", argv, *argv);
	argv +=2;
	printf("%p %s\n", argv, *argv);
	return 0;
}

