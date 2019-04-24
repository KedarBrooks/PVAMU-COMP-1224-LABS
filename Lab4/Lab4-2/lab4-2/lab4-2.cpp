/**  
 * lab4-2.cpp
 * Driver Kerry Mickens
 * Navigator Kedar Brooks
 * 
 * Expected Output:
 * Enter a positive integer
 * 6
 * The prime amount of prime numbers are 3
*/

#include "pch.h"
#include <iostream>
#include "Numbers.h"

int main()
{
	int n;
    std::cout << "Enter a positive integer\n";
	std::cin >> n;
	Numbers num(n);
	std::cout << "The prime amount of prime numbers are " << num.prime_count() << "\n";
	return 0; 
}
