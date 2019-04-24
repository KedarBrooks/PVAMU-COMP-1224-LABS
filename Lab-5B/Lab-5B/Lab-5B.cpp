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
