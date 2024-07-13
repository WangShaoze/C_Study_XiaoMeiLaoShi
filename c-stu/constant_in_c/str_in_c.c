#include<stdio.h>

int main(int argc, char *argv[]){
	// 字符串 "9" = '9' + '\0';         字符串以 '\0' 结尾
	char arr1[] = {"abc"};
	char arr2[] = {'a','b','c', '\0'};

	printf("arr1_len: %d , arr2_len: %d\n", sizeof(arr1),  sizeof(arr2));
	printf("arr1 is %s , arr2 is %s \n", arr1, arr2);
	return 0;
}


