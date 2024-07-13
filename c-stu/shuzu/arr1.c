#include<stdio.h>

int main(int argc, char *argv[]){
	int a[3][2] = {
		{3},
		{2,6},
		{3,2}
	};

	int i,j;

	int i_more, j_more;
	i_more = sizeof(a)/sizeof(a[0]);	
	j_more = sizeof(a[0])/sizeof(int);
	printf("i_more: %d , j_more: %d .\n", i_more, j_more);

	printf("%p %ld\n", a, sizeof(a));
	printf("%p %ld\n", a[0], sizeof(a[0]));
	printf("%p %ld\n", a[1], sizeof(a[1]));

	for (i=0; i<3; i++){
	
		for (j=0; j<2; j++){
			printf("row:%d, col:%d -> %p --> %d \n", i+1, j+1, &a[i][j], a[i][j]);		
		}
		putchar('\n');
	}
	return 0;

}


