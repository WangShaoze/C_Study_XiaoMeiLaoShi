#include<stdio.h>

int main(int argc, char *argv[]){
	int a[3][4]={
		{34, 25, 23, 89},
		{1,90, 23, 91},
		{7, 3, 5, 5}
	};
	int i, j, max_row, max_col, max = 0;

	for (i=0; i<sizeof(a)/(sizeof(int)*4); i++){
		for(j=1; j<sizeof(a[0])/4; j++){
			if(a[i][j] > max){
				max = a[i][j];
				max_row = i+1;
				max_col = j+1;
			}
		}
	}


	printf("row: %d, col: %d ---> max: %d\n", max_row, max_col, max);
	return 0;

}


