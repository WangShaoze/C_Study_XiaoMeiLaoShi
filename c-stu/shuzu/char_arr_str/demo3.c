#include<stdio.h>

int main(int argc, char *argv[]){
	char fruit[][15] = {"pear", "apple", "watermelon", "strawberray", "banana"};
	int i, n;

	n = sizeof(fruit)/sizeof(fruit[0]);
	for (i=0; i< n; i++){
		printf("%s\n", fruit[i]);
	}

	return 0;

}


