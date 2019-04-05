#include "pch.h"
#include <iostream>
#include "Numbers.h"
/**
 *Numbers.cpp 
*/
Numbers::Numbers(int n) { /* Constructor */
	p = new int[n];
	for (int i = 0; i < n; i++)
		p[i] = rand() % 100;
	length = n;
}
int Numbers::prime_count() {
	int cnt = 0;
	for (int i = 0; i < length; i++)
		if (prime_check(p[i]))
			cnt++;
	return cnt;
}
bool Numbers::prime_check(int n) {
	for (int i = 2; i <= n / 2; i++)
		if (n%i == 0)
			return false;
	return true;
}
Numbers::~Numbers() { /**/
	delete p;
}

