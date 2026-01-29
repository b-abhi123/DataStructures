// C++ Program: Sum of Numbers in a Range
// Author: Your Name
// Date: January 31, 2024
// Description: This program calculates the sum of numbers in a specified range.
// The user is prompted to enter the start and end values for the range, and
// the program calculates and displays the sum of numbers within that range.

#include <iostream>

// Function to calculate the sum of numbers in a range
// Input: start - the starting value of the range
//        end   - the ending value of the range
// Output: sum of numbers in the range [start, end]
int calculateSum(int start, int end) {
    int sum = 0;

    // Loop through the range and accumulate the sum
    for (int i = start; i <= end; ++i) {
        sum += i;
    }

    // Return the accumulated sum
    return sum;
}

int main() {
    // Get user input for the range
    int start, end;
    std::cout << "Enter the start value of the range: ";
    std::cin >> start;
    std::cout << "Enter the end value of the range: ";
    std::cin >> end;

    // Check if the range is valid
    if (start > end) {
        std::cout << "Invalid range. Start value should be less than or equal to the end value." << std::endl;
        // Return an error code
        return 1; 
    }

    // Calculate and display the sum of numbers in the range
    int sum = calculateSum(start, end);
    // print the sum of numbers within the range
    std::cout << "Sum of numbers in the range [" << start << ", " << end << "] is: " << sum << std::endl;

    // Return 0 to indicate successful execution
    return 0; 
}
