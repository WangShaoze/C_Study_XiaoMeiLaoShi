#include<stdio.h>

int main(int argc, char *argv[]){
	char fruit[][15] = {"pear", "apple", "watermelon", "strawberray", "banana"};

	int i, j, n, m;

	n = sizeof(fruit)/sizeof(fruit[0]);
	m = sizeof(fruit[0])/sizeof(char);
	
	for (i=0; i< n; i++){
		for (j=0; j<m; j++){
			putchar(fruit[i][j]);	
		}
		putchar('\n');	
	}
	return 0;

}


