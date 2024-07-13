#include<stdio.h>
#define PI 3.1415

int main(){
	float area,r;
	
	for(r=1; r<=10; r++){
		area = PI*r*r;
		if(area > 100)
			break;
		printf("半径: %.3f, 面积: %.3f \n", r, area);
	
	}	
	return 0;
}
