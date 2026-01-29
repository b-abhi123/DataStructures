/*

C++ Program: Program to find the number of prime numbers less than a given positive integer N
Author: Abhinav Belbase
Date: January 22, 2026
Description: This program prompts the user to enter a positive integer N and then calculates and 
displays the number of prime numbers less than N (excluding N).


*/

#include <iostream>

using namespace std;

// Function prototype to check if a number is prime
bool checkPrime(int n);

int main() {
    
    // variable to store user input and count of prime numbers
    int N;
    int primeCount = 0;

    // prompt the user to enter a positive integer N
    cout << "Enter a positive integer N: ";
    cin >> N;

    // check and count prime numbers less than N
    if (N>0) {
        // if N is less than or equal to 2, there are no prime numbers less than N
        if (N <= 2) {
            // display message indicating no prime numbers found
            cout << "There are no prime numbers less than " << N << endl;
        } else {
            // iterate through numbers from 2 to N-1 and check for primality

            for (int i = 2; i < N; i++) {
                if (checkPrime(i)) {
                    // display each prime number found
                    // cout << i << " is a prime number." << endl;
                    primeCount++;
                }
            }

            cout << "There are " << primeCount << " prime numbers less than " << N << endl;
        }
    }

}

// Function to check if a number is prime
bool checkPrime(int n) {

    // variable to track if the number is prime
    bool callback = true;

    if (n <= 1) {
        // numbers less than or equal to 1 are not prime
        callback = false;
    } else {
        // check for factors from 2 to n-1
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                callback = false;
                break;
            }
        }
    }
    // return true if prime, false otherwise
    return callback;
}