#include <stdio.h>

int main(){
	int tem=50;  // 整形，枚举
		     // int,short,long,enum
	switch (tem){
		case 10:
			printf("10\n");
			break;
		case 20:
			printf("20\n");
			break;
		case 30:
			printf("30\n");
			break;
		case 40:
			printf("40\n");
			break;
		case 50:
			printf("50\n");
			break;
		case 60:
			printf("60\n");
			break;
		default:
			printf("不满足其他条件\n");
	}

	return 0;
}
