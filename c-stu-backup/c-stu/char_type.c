#include<stdio.h>
#include<stdbool.h>

int main(int argc, char *argv[]){
	char ch;
	ch = -128;
	printf("%d %c\n", ch, ch);

	ch = 127;
	printf("%d %c\n", ch, ch);

	ch=65;
	printf("%d %c\n", ch, ch);

	ch=-129;
	printf("-129: %d %c\n", ch, ch);

	ch=128;
	printf("128: %d %c\n", ch, ch);

	unsigned char ch1;
	ch1=-1;
	printf("%d %c\n", ch1, ch1);
	return 0;

}


