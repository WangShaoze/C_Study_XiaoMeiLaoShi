#include<stdio.h>

int main(int args, char *argv[]){

	int a[3][2] = {{23, 21}, {78, 90}, {24, 78}};
	int (*p)[2], i, j;

	p = a;
	printf("%p %p\n", a, a+1);
	printf("%p %p\n", p, a+1);

	printf("%d, %d, %d, %d\n", a[2][1], p[2][1], *(*(p+2)+1), *(*(a+2)+1));

	for (i=0; i<3; i++){
		for(j=0; j<2; j++){
			printf("%d, %d, %d, %d ", a[i][j], p[i][j], *(*(p+i)+j), *(*(a+i)+j));
		}
		puts("");
	}
	


	return 0;
}

