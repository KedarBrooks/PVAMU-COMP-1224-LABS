/**
 * Lab-4-1.cpp
 * Driver Kedar Brooks
 * Navigator Kerry Mickens
 *
 * Expected Output:
 * [recursiveMode]
 * ID:20 Score: 47 Grade: F
 * ID:19 Score: 24 Grade: F
 * ID:18 Score: 100 Grade: A
 * ...
 * [Grade Totals]
 * A:3 B:2 C:2 D:1 F:12
*/

//#include "pch.h"
#include <iostream>

struct Student {
	int id;
	double score;
	char grade;
};

bool recursion = true; // assignGrade Mode
char letterGrades[5] = { 'A','B','C','D','F' };
int scoreRanges[4]   = { 90, 80, 70, 60 };
int gradeCounter[5] = { 0,0,0,0,0 }; // [A,B,C,D,F]

void assignGrade(int score, Student *student);
void assignGradeRecurservly(Student students[], int i = 0, int studentIndex = 19);

int main() {
	Student students[20];
		for (int i = 1; i < 21; i++) {
			students[i - 1].id = i;
			students[i - 1].score = (10 + rand() % 91);
			if(!recursion)
			{ /* Non-RecursiveMode */
				assignGrade(students[i - 1].score, &students[i - 1]);
				//Print Student Results
				std::cout << "ID: " << students[i - 1].id << " Score: " << students[i - 1].score
				<< " Grade: " << students[i - 1].grade << std::endl;
			}
			else if(recursion && i == 20)
			{ /* RecursiveMode */
				std::cout<<"[recursiveMode]"<<std::endl;
				assignGradeRecurservly(students);
			}
		}
	// Print class grade totals
	std::cout << "[Grade Totals]" << std::endl;
	std::cout << "A: " << gradeCounter[0] << " B: " << gradeCounter[1] << " C:" << gradeCounter[2]
	<< " D:" << gradeCounter[3] << " F: " << gradeCounter[4] << std::endl;
	return 0;
}

void assignGrade(int grade, Student *student) {
	if (grade >= 90)
	{
		student->grade = 'A';
		gradeCounter[0]++;
	}
	else if (grade >= 80)
	{
		student->grade = 'B';
		gradeCounter[1]++;
	}
	else if (grade >= 70)
	{
		student->grade = 'C';
		gradeCounter[2]++;
	}
	else if (grade >= 60)
	{
		student->grade = 'D';
		gradeCounter[3]++;
	}
	else {
		student->grade = 'F';
		gradeCounter[4]++;
	}
}

void assignGradeRecurservly(Student students[], int i, int studentIndex) {
	if (students[studentIndex].score >= scoreRanges[i] || i==5)
	{ /* assign grades on match & accend through student roster */
		students[studentIndex].grade = letterGrades[i];
		gradeCounter[i]++;
		std::cout << "ID: " << students[studentIndex].id << " Score: " << students[studentIndex].score << " Grade: "
		<< students[studentIndex].grade << std::endl;

		if (studentIndex != 0)
		{ /* make sure we are not at the end of our index */
			studentIndex--;
			// Move on to next student
			assignGradeRecurservly(students, 0, studentIndex);
		}
	}
	else
	{ /* move through scoreRange Index */
		i++;
		assignGradeRecurservly(students, i, studentIndex);
	}
}
