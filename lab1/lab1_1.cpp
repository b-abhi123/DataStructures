/* 

C++ Program: Celsius to Fahrenheit Converter
Author: Abhinav Belbase
Date: January 22, 2026
Description: This is a program that converts temperature from Celsius to Fahrenheit.
The user is prompted to enter a temperature in Celsius, and the program calculates and displays the equivalent temperature in Fahrenheit.
The conversion formula used is: F = C * 1.8 + 32

*/


#include <iostream>

using namespace std;

int main() {

    // celsisus variable stores the temperature in Celsius
    double celsius;

    // the user is prompted to enter temperature in Celsius
    cout << "Enter Temperature in Celsius: ";

    // read temperature entered by the user
    cin >> celsius; 

    // converting the celsius temperature to Fahrenheit using the formula F = C * 1.8 + 32
    double fahrenheit = celsius * 1.8 + 32;

    // displaying converted temperature in Fahrenheit
    cout << "Temperature in Fahrenheit is: " << fahrenheit << endl;

    // return 0 for successful execution
    return 0; 
}