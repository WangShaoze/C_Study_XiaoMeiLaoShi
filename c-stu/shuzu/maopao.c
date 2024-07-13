#include<stdio.h>
#include<stdbool.h>

int main(int argc, char *argv[]){
	int a[7] = {38, 49, 76, 13, 27, 30, 97};
	int n=7, tmp;
	int i, j;

	for (i=0; i<n; i++){
		for (j=0; j<n-i; j++){
			tmp = a[j];
			if ((j+1 <= n-1) && (a[j+1] > tmp) ){
				a[j] = a[j+1];
				a[j+1] = tmp;	
			}
		}
		printf("这是第%d趟 a=[", i);
		for (j=0; j<n; j++){
			printf("%d, ", a[j]);
		}
		printf("]\n");
		
	}

	return 0;

}


