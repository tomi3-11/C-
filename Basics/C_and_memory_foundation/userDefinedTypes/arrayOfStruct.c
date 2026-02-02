#include <stdio.h>

typedef struct{
	char name[20];
	float gpa;
}Student;

int main() {
	// Main function
	Student s1 = {"Tom", 3.5};
	Student s2 = {"Will", 3.0};
	Student s3 = {"John", 2.5};
	Student s4 = {"Terry", 4.0};

	// creating an array to house them
	Student students[] = {s1, s2, s3, s4};
	
	char title1[10] = "Name";
	char title2[10] = "GPA";

	printf("%-12s\t %s\n", title1, title2);
	for (int i = 0; i < sizeof(students) / sizeof(students[0]); ++i){
		printf("%-12s\t", students[i].name);
		printf("%.2f\n", students[i].gpa);
	}

	return 0;
}
