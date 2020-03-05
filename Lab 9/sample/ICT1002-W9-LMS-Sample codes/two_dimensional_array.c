/*
 * Two dimensional arrays example.
 */
#include <stdio.h>

/* array dimensions */
#define STUDENTS 3
#define EXAMS 4

/* each of these functions takes a two-dimensional array as its first parameter */
int findLowest(int[][EXAMS], int);
int findHighest(int[][EXAMS], int);
void printGrades(const int[][EXAMS], int);

int main() {

	int studentGrades[STUDENTS][EXAMS] = {
		{77, 68, 86, 72},
		{96, 87, 89, 78},
		{70, 90, 86, 81}
	};

	printGrades(studentGrades, STUDENTS);
	printf("The lowest grade is %d.\n", findLowest(studentGrades, STUDENTS));
	printf("The highest grade is %d.\n", findHighest(studentGrades, STUDENTS));

	return 0;

}

/* find the lowest grade for all students on all exams */
int findLowest(int grades[][EXAMS], int numberOfStudents) {

	int lowest = 101;
	int i, j;

	for (i = 0; i < numberOfStudents; i++)
		for (j = 0; j < EXAMS; j++)
			if (grades[i][j] < lowest)
				lowest = grades[i][j];

	return lowest;

}

/* find the highest grade for all students on all exams */
int findHighest(int grades[][EXAMS], int numberOfStudents) {

	int highest = 0;
	int i, j;

	for (i = 0; i < numberOfStudents; i++)
		for (j = 0; j < EXAMS; j++)
			if (grades[i][j] > highest)
				highest = grades[i][j];

	return highest;

}

/* print an array of students grads */
void printGrades(const int grades[][EXAMS], int numberOfStudents) {

	int i, j;

	printf("Name\t\t[0]\t[1]\t[2]\t[3]\n");
	for (i = 0; i < numberOfStudents; i++) {
		printf("Student[%d]", i);
		for (j = 0; j < EXAMS; j++)
			printf("\t%d", grades[i][j]);
		printf("\n");
	}

}
