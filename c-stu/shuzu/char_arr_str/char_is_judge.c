#include<stdio.h>
#include<ctype.h>

int main(int argc, char *argv[]){
	int ch;
	
	while ((ch=getchar()) != EOF){
		if (isalpha(ch)){
			if (isupper(ch)){
				printf("Upper: %c\n", ch);
			}
			if (islower(ch)){
				printf("lower: %c\n", ch);
			}
		}	

		if (isdigit(ch)){
			printf("Digit: %d %c\n", ch-'0', ch);
		}

		putchar(ch);
	}
	
	return 0;

}


