wangshaoze@wangshaoze-Default-string:~/桌面/study_progr/c-stu/varialbe$ cat -b -s extern_static_var_demo1.c extern_static_var_demo2.c
     1	int global_a=100;  // 通过 extern 可以在其他文件中使用
     2	// static int global_a=100;  // 如果被static修饰不能通过 extern 在其他文件中使用
     3	#include<stdio.h>

     4	extern int global_a;
     5	int main(int args, char *argv[]){
     6		printf("the global_a is %d \n", global_a);
     7		return 0;
     8	}


