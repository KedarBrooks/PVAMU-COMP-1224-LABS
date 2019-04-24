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

#include "pch.h"
#include <iostream>
#include "Classroom.h"

bool recursion = true; // assignGrade Mode

int main() {
	/* Work is kicked off by class initilization.
	 * recursion flag controls the grade assignment method */
	Classroom myClassRoom(recursion); 
	return 0;
}