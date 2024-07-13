#include<stdio.h>
#include<math.h>
int main(){
	int i = 100;
	int ge, shi, bai;

	while (i <= 999){
		ge = i % 10;
		shi = i / 10 % 10;
		bai = i / 100;

		//if(ge*ge*ge + shi*shi*shi + bai*bai*bai == i){
		if (pow(ge,3)+pow(shi,3)+pow(bai,3)==i){
			printf("%d 是一个水仙花数，ge:%d --> %d , shi:%d --> %d , bai:%d --> %d . %d=%d^3 + %d^3 + %d^3 \n", i, ge, ge*ge*ge, shi, shi*shi*shi, bai, bai*bai*bai, i, ge, shi, bai);
		}
		i++;
	}	
	return 0;
}
