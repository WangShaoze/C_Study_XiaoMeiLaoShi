#include<stdio.h>
#include<string.h>

int get_len(char *);

char * concat_by(char *dest, const char *src, const char *sep);

int main(int args, char *argv[]){
	char * sep = *(argv+1);
	int i, total;
	
	total =0;
	for (i=2; i<args; i++){
		total += get_len(*(argv+i));
		if (i!=args-1)
			total += get_len(sep);
	}
	char rsl[total+1];
	char * sep_null="";
	char *p = rsl;
	strcpy(rsl, *(argv+2));
	for (i=3; i<args; i++){
		concat_by(p,*(argv+i), sep);
	}
	printf("%s\n", rsl);	
	return 0;
}

int get_len(char *s){
	int i=0;
	char *p;
	p =s;
	while(*p++)
		i++;
	return i;
}

char * concat_by(char *dest, const char *src, const char *sep){
	char *p = dest;
	while(*p++);
	p--;
	while(*p++=*sep++);  // 这里的执行顺序是这样的:
			     			// *p = *sep
						// *sep++
						// *p ++
						// 当*sep == '\0'时，继续将值传给 *p
						// *p == '\0'
						// 但是由于 *p++ 的++ 特性，在退出循环时，++一定是执行了的
	p--;  // 重新回到 *p == '\0' 的位置
	
	while(*p++=*src++);
	return dest;
}

