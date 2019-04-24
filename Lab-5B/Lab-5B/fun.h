#pragma once
#ifndef FUN_H
#define FUN_H
#include<vector>
#include<iostream>
using namespace std;
class fun
{
private: bool sorted = 0;
		 int x;
public:
	fun()
	{

	}
	fun(int b)
	{
		x = b;
	}
	template<class T>
	void sort(T ray[]) {
		sorted = 1;
		for (int i = 0; i < x - 1; i++) {
			for (int y = i; y < x - 1 - i; y++) {
				if (ray[y] > ray[y + 1]) {
					T temp = ray[y];
					ray[y] = ray[y + 1];
					ray[y + 1] = temp;
				}
			}
		}
	}
	/*for sorting vectors*/
	void sort(vector<double>ray) {
		sorted = 1;
		for (int i = 0; i < x - 1; i++) {
			for (int y = i; y < x - 1 - i; y++) {
				if (ray[y] > ray[y + 1]) {
					double temp = ray[y];
					ray[y] = ray[y + 1];
					ray[y + 1] = temp;
				}
			}
		}
	}
	template<class T>
	double mean(T ray[]) {
		double sum = 0, avg = 0;
		if (!sorted)
			sort(ray);
		for (int i = 0; i < x; i++) {
			sum += ray[i];
		}
		return avg = sum / x;
	}
	template<class T>
	T median(T ray[]) {
		if (!sorted)
			sort(ray);
		return ray[x / 2];
	}

	void max_min(std::vector<double> arr, int size) {
		int maxIndex = 0; 
		for (int i = 0; i < 10; i++) {
			if (arr[i] >= arr[maxIndex])
			{
				maxIndex = i; 
			}
		}
		std::cout << "max: " << arr[maxIndex] << std::endl;
		std::cout << "min: " << arr[0] << std::endl;
	}
	~fun()
	{

	 }
};

#endif FUN_H
