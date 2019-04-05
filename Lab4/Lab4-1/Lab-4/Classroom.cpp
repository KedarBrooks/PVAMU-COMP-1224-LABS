#include "pch.h"
#include <iostream>
#include "Classroom.h"
/**
 * Classroom.cpp
*/
Classroom::Classroom()
{
	// No recursion if no flag
	generateClassroom(false); 
}

Classroom::Classroom(bool recursion)
{
	generateClassroom(recursion);
}

void Classroom::generateClassroom(bool recursion)
{
	Classroom::Student students[20];
	for (int i = 0; i < 20; i++) {
		students[i].id = i+1;
		students[i].score = (10 + rand() % 91);
		if (!recursion)
		{ /* Non-RecursiveMode: (runs concurently with the loop)*/
			assignGrade(students[i].score, &students[i]);
			//Print Student Results
			std::cout << "ID: " << students[i].id << " Score: " << students[i].score
				<< " Grade: " << students[i].grade << std::endl;
		}
		else if (recursion && i == 19)
		{ /* RecursiveMode: (runs at the end of the loop)*/
			std::cout << "[recursiveMode]" << std::endl;
			assignGradeRecurservly(students); 
		}
	}
	// Print class grade totals, (used multiple cout for code readability)
	std::cout << "[Grade Totals]" << std::endl;
	std::cout << "A: " << gradeCounter[0] << " B: ";
	std::cout << gradeCounter[1] << " C:";
	std::cout << gradeCounter[2] << " D:" << gradeCounter[3] << " F: ";
	std::cout << gradeCounter[4] << std::endl;
}

void Classroom::assignGrade(int score, Student *student)
{
	if (score >= 90)
	{
		student->grade = 'A';
		gradeCounter[0]++;
	}
	else if (score >= 80)
	{
		student->grade = 'B';
		gradeCounter[1]++;
	}
	else if (score >= 70)
	{
		student->grade = 'C';
		gradeCounter[2]++;
	}
	else if (score >= 60)
	{
		student->grade = 'D';
		gradeCounter[3]++;
	}
	else {
		student->grade = 'F';
		gradeCounter[4]++;
	}
}

void Classroom::assignGradeRecurservly(Student students[], int i, int studentIndex)
{
	if (students[studentIndex].score >= scoreRanges[i] || i == 5)
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

Classroom::~Classroom()
{

}
