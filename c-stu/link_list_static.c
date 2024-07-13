#include <stdio.h>
#define N 20

typedef enum{
	Male,
	Female
}gender_type;

typedef struct stu{
	char name[N];
	unsigned char age;
	gender_type gender;
	struct stu *next;
}student;

void print_stu_info(student *p){
	while(p!=NULL){
		printf("姓名: %s 年龄:%d 性别: %d \n", p->name, p->age, p->gender);
		p=p->next;
	}

}

int main(){
	student s1 = {"xiowang01", 20, Male, NULL};
	student s2 = {"xiowang02", 24, Female, NULL};
	student s3 = {"xiowang03", 25, Male, NULL};
	student s4 = {
		.name="xiaowang04",
		.age=68,
		.next=NULL
	}; 

	s4.next = &s3;
	s3.next = &s2;
	s2.next = &s1;

	print_stu_info(&s4);
	return 0;
}


