#include <stdio.h>


int main(){
	
	int x = 7;
	//if(x==7){
	// if(x=8){
	if(8==x){  // 标准比较方式，如果写成x=8 表示赋值 给x if 得到的是1走的是if成立
		printf("if: x=%d\n", x);
	}else{
		printf("else: x=%d\n", x);
	}
	return 0;
}
