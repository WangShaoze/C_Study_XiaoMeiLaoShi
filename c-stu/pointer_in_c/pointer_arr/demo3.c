#include<stdio.h>

int main(int args, char *argv[]){
	int a[2][3] = {{1, 4, 6}, {12, 9, 7}};
	int * p[2] = {a[0], a[1]};
	int i,j, sum;	
	int * *q;  // 定义二级指针
	q = p;
	
	printf("total: %ld\n", sizeof(p));
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			sum +=  *(*(p+i)+j);
		}
	}

	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			printf("%d\t", *(*(q+i)+j));
		}
		puts("");
	}


	printf("sum=%d\n", sum);

		


	return 0;
}

