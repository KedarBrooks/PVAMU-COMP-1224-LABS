// Lab-5B.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Drier: Kerry Mickens
//Navigator: Kedar Brooks

#include "pch.h"
#include <iostream>
#include"fun.h"
using namespace std;

int main()
{
	double ray[10];
	vector<double> arr(10); 
	for (int i = 0; i < 10; i++) {
		double r = rand() % 1000;
		ray[i] = r;
		arr[i] = r; 
	}
	fun Nums(10);
	cout << "[";
	for (int i = 0; i < 10; i++) {
		cout << ray[i] << " ";
	}
	cout << "]" << endl;
	Nums.sort(ray);
	cout << "[";
	for (int i = 0; i < 10; i++) {
		cout << ray[i] << " ";
	}
	cout << "]" << endl;
	cout << Nums.mean(ray) << endl << Nums.median(ray) << endl;
	Nums.max_min(arr,10); // find max min

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
