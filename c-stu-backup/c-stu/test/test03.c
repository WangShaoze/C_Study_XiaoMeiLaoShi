#include<stdio.h>

int main(){
	int rsl=1, i=2;
	while(i<=10){
		rsl = rsl * i;
		i++;
	}

	printf("file:%s, function:%s, line: %d , result:%d\n", __FILE__, __FUNCTION__, __LINE__, rsl);
	return 0;

}
