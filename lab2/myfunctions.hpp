//============================================================================
// Name         : myfunctions.hpp
// Author       : Abhinav Belbase
// Version      : 1.0
// Date Created : 29-01-2026
// Date Modified: 29-01-2026
// Description  : 
//============================================================================
//Include guard starts
#ifndef MYFUNCTIONS_HPP
#define MYFUNCTIONS_HPP
#include<iostream>
#include<cstdlib>

using std::cout;
using std::cin;
using std::endl;

void inputMarks(int* &arr, int& size) //size is passed by reference so that it can be reused in main.cpp
{
	//input number of students
	int numberOfStudents;
	cout << "Enter number of students: ";
	cin >> numberOfStudents;

	//dynamically allocate memory for the array
	arr = new int[numberOfStudents];
	size = numberOfStudents; //set size to numberOfStudents so that it can be used in other functions

	//input marks
	cout << "Enter marks for " << numberOfStudents << " students: " << endl;
	
	//loop to input marks separated by newline
	for (int i = 0; i < numberOfStudents; ++i) {
		cin >> arr[i];
	}
}

void displayMarks(const int* arr, int size)
{
	//display marks to the console
	cout << "Marks entered: " << endl;
	for (int i = 0; i < size; ++i) {
		cout << arr[i] << " ";
		// for structure of output
		if (i == size - 1) {
			cout << endl;
		}
	}
}

double calculateAverage(const int* arr, int size)
{
	//calculate average of marks
	double sum = 0.0;
	for (int i = 0; i < size; ++i) {
		sum += arr[i];
	}
	return sum / size;
}


void findMinMax(const int* arr, int size, int &min, int &max)
{
	//initialize min and max with first element of the array
	min = arr[0];
	max = arr[0];

	//loop to find min and max by comparing each element with current min and max
	for (int i = 1; i < size; ++i) {
		if (arr[i] < min) {
			min = arr[i];
		}
		if (arr[i] > max) {
			max = arr[i];
		}
	}

}

//include guard ends
#endif
