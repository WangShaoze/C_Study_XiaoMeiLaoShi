#include<stdio.h>

int main(){
	int a=254;
	char ch='A';
	char s[] = "abcfdsafasfasd";
	float f1=65.9032;

	printf("%d %o %x \n", a, a, a);
	printf("%u\n", a);  // 无符号十进制整数 
	printf("%c - %d\n", ch, ch);
	printf("%s \n", s);
	printf("%f - %e - %g \n", f1, f1, f1);
	printf("%%\n"); // 输出%


	int x = 34;
	float f = 232.545226;
	printf("%8d\n%8d\n", a, x);
	printf("%4d\n%4d\n", a, x);

	printf("%8.2f \t %4.4f \t %4f \t %.3f \n", f, f, f, f);

	printf("12345678\n%5c\n", ch);


	char str[] = "Hello,world!";
	printf("123456789012345\n");
	printf("%15s\n", str);
	printf("%15.5s\n", str);
	printf("%2.5s\n", str);
	printf("%.5s\n", str);

	int y=23;
	float f2 = 43.5677;
	printf("%0+9d\n", y);
	printf("%06.2f\n", f2);
	return 0;
}

