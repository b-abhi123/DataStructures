#include<iostream>
#include "myfunctions.hpp"   // Custom header file containing function prototypes

using namespace std;

int main()
{
    // Pointer to dynamically allocated array of student marks
    int *arr;      

    // Variable to store the number of students (array size)
    int size;      

    // Variables to store the minimum and maximum marks
    int min, max;  

    // Input marks from the user and allocate memory dynamically
    inputMarks(arr, size);

    // Display all the marks entered by the user
    displayMarks(arr, size);

    // Calculate and display the average of the marks
    cout << "Average: " << calculateAverage(arr, size) << endl;

    // Find the minimum and maximum marks
    findMinMax(arr, size, min, max);

    // Display the lowest mark
    cout << "Lowest mark: " << min << endl;

    // Display the highest mark
    cout << "Highest mark: " << max << endl;

    // Free the dynamically allocated memory
    delete[] arr;

    // Exit program successfully
    return 0;   
}
