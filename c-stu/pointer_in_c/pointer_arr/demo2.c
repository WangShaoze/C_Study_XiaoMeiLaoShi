#include<stdio.h>

int main(int args, char *argv[]){
	int a[2][3] = {{1, 4, 6}, {12, 9, 7}};
	int * p[2] = {a[0], a[1]};
	int i,j;	
	//printf("%p %p\n", a[0], a[1]);	
	//printf("%p %p\n", p[0], p[1]);	
	
	for(i=0; i<2; i++){
		for(j=0; j<3; j++){
			//printf("%d\t", *(a[i]+j));
			//printf("%d\t", *(p[i]+j));
			printf("%d\t", *(*(a+i)+j));
			//printf("%d\t", *(*(p+i)+j));
		}
		puts("");
	}



		


	return 0;
}

