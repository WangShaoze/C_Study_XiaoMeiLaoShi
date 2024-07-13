#include <stdio.h>
#define N 20

typedef enum {
	Male,
	Female
}gender_type;

typedef struct stu{
	char name[N];
	unsigned char age;
	gender_type gender;
	struct stu * next;	
}student;

void print_stu_info(student *p){
	while (p!=NULL){
		printf("%s:%d:%d\n", p->name, p->age, p->gender);
		p=p->next;
	}
}

int main(){
	student s1 = {"1-zhangsan", 20, Male, NULL};
	student s2 = {"2-lisi", 14, Female, NULL};
	student s3 = {
		.name = "3-wangwu",
 		.age = 16,
		.next = NULL		
	};

	s1.next = &s2;
	s2.next = &s3;

	print_stu_info(&s1);

	return 0;

}



