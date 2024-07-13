#include<stdio.h>


int main(int args, char *argv[]){

	float x = 3.4,y=80.61,z;

	// z=(x+=5, y=x+0.2);
	z=(x++, y++, y=12+x);
	printf("x=%f , y=%f , z=%f .\n", x, y, z);
	return 0;
}
