#include<stdio.h>

int main(){
	int a[] = {3,5,9,5,3,5,20,90,32};
	int *p, i, n;

	p = a;
	n = sizeof(a)/sizeof(int);

	printf("%p %p %p\n", a, a+1, a+2);

	for (i=0; i<n; i++){
		printf("%d %d %d %d\n", a[i], *(p+i), *(a+i), p[i]);  // 说明 *(p+i) <=> p[i] 
	}

	puts("");
	
	p++;
	printf("%d\n", p[1]); // p[1] <==> *(p+1) 
			    // --> 9 
	return 0;
}
