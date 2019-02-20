#include <iostream>
#include <stdio.h>

void selectSort(int a[], int size);
void bubbleSort(int b[], int size);
void binarySearch(int target, int a[], int size);
void swap(int a[], int indexA, int indexB);
void arrayPrinter(int a[], int size);

int main() {
	std::cout << "generating 20 item array: ";
	int a[20], b[20], c[20];
	for (int i = 0; i < 20; i++) {
		// generate values and assign to mirrors
		int r = rand() % 100;
		a[i] = r;
		b[i] = r;
		c[i] = r;
	}
	// print computed set
	arrayPrinter(a, 20);
	std::cout << std::endl;
	std::cout << std::endl;
	// Compute with select sort
	selectSort(a, 20);
	std::cout << "selection sort:";
	arrayPrinter(a, 20);
	// Compute with bubble sort
	bubbleSort(b, 20);
	std::cout << "bubble sort:   ";
	arrayPrinter(b, 20);
	// Conduct Binary Search
	int target; 
	std::cout << "Enter a value to find within set: ";
	std::cin >> target; 
	std::cout << std::endl; 
	binarySearch(target, a, 20); 

	return 0;
}
// computes a ascending sorting array with selection sort
void selectSort(int a[], int size) {
	for (int i = 0; i < size; i++) {
		for (int x = i + 1; x < size; x++) {
			if (a[i] > a[x])
				swap(a, i, x);
		}
	}
}
// computes a ascending sorting array with bubbleSort
void bubbleSort(int b[], int size) {
	bool swapped = true;
	while (swapped) {
		swapped = false;
		for (int i = 0; i + 1 < size; i++) {
			if (b[i] > b[i + 1]) {
				swap(b, i, i + 1);
				swapped = true;
			}
		}
		size--;
	}
}
// conducts a binary search through a sorted list for a target value
void binarySearch(int target, int a[], int size) {
	int f=0, m, l=size-1;
	m = (f + l) / 2;
	while (f <= l) {
		if (a[m] < target) {
			f = m + 1; 
		}
		else if (a[m] == target) {
			printf("target value (%d) found at index: %d", target, m + 1); 
			break;
		}
		else {
			l= m - 1; 
		}
		m = (f + l) / 2; 
	}
	if (f > l)
		std::cout << target << ": could not be found in set" << std::endl; 
}
// handles value swapping in arrays
void swap(int a[], int indexA, int indexB) {
	//Array Swap Function
	int temp = a[indexA];
	a[indexA] = a[indexB];
	a[indexB] = temp;
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
