/*
 * struct example with function calls
 */
#include <stdio.h>

typedef struct student {
	char name[20];
	int roll;
	int age;
	char class[12];
} Student;

void print_student(Student *s);

int main() {

	/* initialise a variable of type Student */
	Student stud1 = { "Sachin Kumar", 101, 16, "ICT1002" };
	
	/* display contents of stud1 */
	print_student(&stud1);
	
	return 0;
	
}

void print_student(Student *s) {

	printf("\n Name : %s", s->name);
	printf("\n Roll : %d", s->roll);
	printf("\n Age  : %d", s->age);
	printf("\n Class: %s", s->class);

}