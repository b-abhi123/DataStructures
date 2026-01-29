/*

C++ Program: Selection and Repetitive Structures - Prime Number Checker
Author: Abhinav Belbase
Date: January 22, 2026
Description: This program prompts the user to enter a positive integer and then determines
whether the entered number is a prime number using selection and repetitive structures.

*/

#include <iostream>

using namespace std;

int main() {
    
    // variable to store the user input number and a boolean for prime check
    int number;
    bool callback = true;

    // prompt the user to enter a positive integer
    cout << "Enter a positive integer: ";
    cin >> number;

    if (number > 0) {
        // check if the number is prime

        // 1 is neither prime nor composite
        if (number <= 1) {
            callback = false;
        } else {
            // check for factors from 2 to sqrt(number)
            for (int i = 2; i < number; i++) {
                if (number % i == 0) {
                        // number is divisible by i, hence not prime
                        callback = false;
                        break;
                    }
                }
        }
        // display the result based on the callback value
        if (callback) {
            cout << "The given number is a prime number." << endl;
        } else {
            cout << "The given number is not a prime number." << endl;
        }   
        
    } else {
        // handle invalid input
        cout << "A positive integer was not entered." << endl;
    }
}

