/*
Author: Christopher Pawlus
Course: CSCI-136
Instructor: Professor Zamansky
Assignment: Loops, Arrays, and Number Sequences, valid.cpp, Lab 2A.

This program asks the user to enter an integer between 0
less than n less than 100 and return that number squared,
but asks the user for a number if the number is out of range.
*/

#include <iostream>

int main() 
{
    // Variable
    int input;
    std::cout << "Please enter an integer: ";
    std::cin >> input;
    // Conditionals
    while((input < 1) || (input > 99)) 
    {
        std::cout << "Please re-enter: ";
        std::cin >> input;
    }
    std::cout << "\nNumber squared is " << input*input << "\n";
    return 0;
}