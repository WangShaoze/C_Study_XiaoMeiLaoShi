#include<stdio.h>
#include<stdbool.h>

int main(int argc, char *argv[]){
	int i;
	static int a[6];

	for (i=0; i<6; i++){
		printf("%p %d\n", &a[i], a[i]);
	}

	printf("%p\n", a);
	printf("%ld\n", sizeof(a));
	printf("可存元素个数: %ld个\n", sizeof(a)/sizeof(int));
	
	return 0;

}


