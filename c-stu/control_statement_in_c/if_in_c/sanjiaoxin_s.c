#include <stdio.h>
#include <math.h>

int two_bain_more(float bian1, float bian2, float bian3){
	if (bian1+bian2>bian3){
		return 0;
	}else{
		return 1;
	}
}

int two_bain_less(float bian1, float bian2, float bian3){
	if (bian1-bian2<bian3){
		return 0;
	}else{
		return 1;
	}
}

int main(int args, char *argv[]){
	float a, b, c, p, s, cl;

	printf("请输入该该三角形的3条边(使用空格分开:)\n");
	if( 3==scanf("%f %f %f", &a, &b, &c)){	
		// 合法性
		// 三角形的任意2边之和大于第3边，之差小于第3边
		if (two_bain_more(a, b, c) || two_bain_more(a, c, b) || two_bain_more(b, c, a)){
			printf("不是一个三角形！！三角形两边之和大于第三边！！\n");
			return 0;
		}
		if (two_bain_less(a, b, c) || two_bain_less(a, c, b) || two_bain_less(b, c, a)){
			printf("不是一个三角形！！三角形两边之差小于第三边！！\n");
			return 0;
		}

		// 求出 p = (a+b+c)/2
		// s = (p*(p-a)*(p-b)*(p-c))**(1/2)
		
		p = (a+b+c)/2;
		s = sqrt(p*(p-a)*(p-b)*(p-c));
		cl = (a + b + c);
		printf("该三角形的参数是:\n a=%f, b=%f, c=%f \n面积s=%.3f 周长: cl=%.3f\n", a, b, c, s, cl);


	}

	

	return 0;
}

