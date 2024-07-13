#include<stdio.h>

int main(int args, char *argv[]){

	int x=1, y=0, z=0;
	// if(x++ && y++ || ++z)  // 2,1,1 ---> true
	// if (!(x+1>0) && y++ || ++z)  // 1,0,1 ---> false
	if(x+=y==z,y=x+2, z=x+y+z>0)  // 2,4,1 ----> true
		printf("true:  x=%d , y=%d , z=%d\n", x, y,z);
	else
		printf("false: x=%d , y=%d , z=%d\n", x, y, z);
	return 0;
}
