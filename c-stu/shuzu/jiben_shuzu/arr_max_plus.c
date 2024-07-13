#include<stdio.h>

int main(int argc, char *argv[]){
	int a[3][4]={
		{34, 25, 23, 89},
		{1,90, 23, 91},
		{7, 3, 5, 5}
	};
	int i, j, max_row, max_col;

	max_row = max_col = 0;

	for (i=0; i<sizeof(a)/(sizeof(int)*4); i++){
		for(j=1; j<sizeof(a[0])/4; j++){
			if(a[i][j] > a[max_row][max_col]){
				max_row = i;
				max_col = j;
			}
		}
	}


	printf("row: %d, col: %d ---> max: %d\n", max_row+1, max_col+1, a[max_row][max_col]);
	return 0;

}


