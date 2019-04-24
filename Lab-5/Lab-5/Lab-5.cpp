/**
	Driver: Kedar  
	Navigator: Kerry

	runs an specified operation on two integers 
*/

#include "pch.h"
#include "Math_2.h"
#include <iostream>

int main()
{
	int a=0, b=0, mode=0; 
    std::cout << "Enter 2 Intergers: ";
	std::cin >> a >> b;
	std::cout << "would you like to:" << std::endl;
	std::cout << "1. add" << std::endl;
	std::cout << "2. subtract" << std::endl;
	std::cout << "3. multiply " << std::endl;
	std::cout << "4. divide" << std::endl;
	std::cin >> mode; 
	Math_2 *p = new Math_2; 
	switch (mode) {
		case 1:
			std::cout << (p->add(a, b)) << std::endl; 
			break; 
		case 2:
			std::cout << (p->subtract(a, b)) << std::endl;
			break;
		case 3:
			std::cout << (p->multiply(a, b)) << std::endl;
			break; 
		case 4:
			std::cout << (p->divide(a, b)) << std::endl;
			break;
		default:
			std::cout << "command not found" << std::endl; 
			break;
	}
	delete p; 
	return 0; 
