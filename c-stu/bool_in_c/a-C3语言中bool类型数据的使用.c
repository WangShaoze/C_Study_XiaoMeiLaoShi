#include<stdio.h>
#include<stdbool.h>

int main(int argc, char *argv[]){
	bool a;
	a=true;
	a=false;
	
	a=-1;
	a=0;

	if(a){
		printf("true %d\n", a);
	}else{
		printf("false  %d\n", a);
	}
	return 0;

}


