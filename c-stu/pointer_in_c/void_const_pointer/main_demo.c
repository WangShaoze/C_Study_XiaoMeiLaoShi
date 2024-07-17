#include<stdio.h>

int main(int argc, const char * argv[]){  // 字符指针数组
	// const char * argv[] = {"./a.out", "192.168.1.12", "8080"};
	int i;

	printf("argc=%d\n", argc);

	for (i=0; i<argc; i++){
		printf("%s\t", argv[i]);
	}
	puts("");

	*(argv+1) = "xiugai";

	for (i=0; i<argc; i++){
		printf("%s\t", argv[i]);
	}
	puts("");

	printf("%p\n", argv);
	argv += 2;	
	printf("%p\n", argv);

	return 0;
}
