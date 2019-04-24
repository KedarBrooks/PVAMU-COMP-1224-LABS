#ifndef _Classroom_H
/**
 * Classroom.h
*/
class Classroom
{
	char letterGrades[5] = { 'A','B','C','D','F' };
	int scoreRanges[4] = { 90, 80, 70, 60 };
	int gradeCounter[5] = { 0,0,0,0,0 }; // [A,B,C,D,F]
public:
	struct Student {
		int id;
		double score;
		char grade;
	};

public:
	Classroom();
	Classroom(bool recursion); 
	void generateClassroom(bool recursion); 
	void assignGrade(int score, Student *student);
	void assignGradeRecurservly(Student students[], int i = 0, int studentIndex = 19);
	~Classroom();
};

#endif // !_Classroom_H