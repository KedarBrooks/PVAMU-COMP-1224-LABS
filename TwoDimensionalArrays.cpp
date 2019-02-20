/*
* Two Dimensional Array Lab Assignment 2 | Part B
* Kedar Brooks, 2019
* Example Output:
*
* [Creating 5x5 array]:
*
* arr[0][x]: 51,95,65,29,69
* arr[1][x]: 82,22,66,36,86
* arr[2][x]: 73,36,86,93,52
* arr[3][x]: 46,93,31,14,77
* arr[4][x]: 96,54,90,72,29
*
*
* Sums:     [ 309,292,340,261,341 ]
*
* Averages: [ 61,58,68,52,68 ]
*
* The total amount of even numbers found were: 14
*
***************************************************/

#include <iostream>
#include <stdio.h>
 
void arrayPrinter(int a[], int size);
void arrayPrinterMultiDim(int a[][5], int size);
void calculateSumAverage(int A[], int S[], int arr[][5], int size); 

int main() {
	std::cout << "[Creating 5x5 array]: ";
	std::cout <<std::endl;
	std::cout <<std::endl;
	int arr[5][5], even=0;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			// generate values and assign
			int r = 10 + rand() % 91;
			arr[i][j] = r; 
			// Count Even Nums
			if (r % 2 == 0)
				even++; 
		} 
	}
	// print multiDimArray
	arrayPrinterMultiDim(arr, 5);
	// Declare and init Sum & Average arrays
	int S[5] = { 0,0,0,0,0 }; 
	int A[5] = { 0,0,0,0,0 };
	//Compute Sum & Average
	calculateSumAverage(A, S, arr, 5);
	// Print Sum & Average Array
	std::cout << "Sums:     ";
	arrayPrinter(S, 5);
	std::cout << "Averages: ";
	arrayPrinter(A, 5);
	std::cout << "The total amount of even numbers found were: "<< even;
	std::cout << std::endl; 
	return 0;
}

void calculateSumAverage(int A[], int S[], int arr[][5], int size) {
	// Calculate Sums
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			S[i] = S[i] + arr[i][j];
		}
	}
	// Calculate Averages
	for (int i = 0; i < size; i++) {
		A[i] = S[i] / 5; 
	}
}

// controls arrayPrinting
void arrayPrinter(int a[], int size) {
	std::cout << "[ ";
	for (int i = 0; i < size; i++) {
		// print values
		if (i != size - 1) {
			std::cout << a[i] << ",";
			continue;
		}
		std::cout << a[i];
	}
	std::cout << " ]";
	std::cout << std::endl;
	std::cout << std::endl;
}
// controls arrayPrinting of multidim arrays (assumes array is symmetrical)
void arrayPrinterMultiDim(int a[][5], int size) {
	for (int i = 0; i < size; i++) {
		std::cout << "arr[" << i << "][x]: "; 
		for (int j = 0; j < size; j++) {
			// print values
			if (j != size - 1) {
				std::cout << a[i][j] << ",";
				continue;
			}
			std::cout << a[i][j];
		}
		std::cout << std::endl; 
	}
	std::cout << std::endl;
	std::cout << std::endl;
}



