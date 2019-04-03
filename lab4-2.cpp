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
class Numbers {
	int *p;
	int length;
public:
	Numbers(int n) {
		p = new int[n];
		for (int i = 0; i < n; i++)
			p[i] = rand()%100;
		length = n;
	}
	int prime_count() {
			int cnt = 0;
			for (int i = 0; i < length; i++)
					if (prime_check(p[i]))
						cnt++;
			return cnt;
	}
	bool prime_check(int n) {
		for (int i = 2; i <= n / 2; i++)
			if (n%i == 0)
				return false;
		return true;
	}
	~Numbers() {
		delete p;
	}
};

int main()
{
	int n;
    std::cout << "Enter a positive integer\n";
	std::cin >> n;
	Numbers num(n);
	std::cout << "The prime amount of prime numbers are " << num.prime_count() << "\n";
}
