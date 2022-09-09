/*
Author: Christopher Pawlus
Course: CSCI-136
Instructor: Professor Zamansky
Assignment: Loops, Arrays, and Number Sequences, (print-interval.cpp) main.cpp, funcs.cpp, funcs.h, Lab 2B.

This program asks takes two integers and prints out them
out in order from the first integer given to the last integer given.
*/

#include <iostream>
#include "funcs.h"

int main() 
{
    // Variables
    // Hard coded test values
    int low_b = -7;
    int upp_b = 13;
    std::cout << "\n";
    // Function
    print_interval(low_b,upp_b);
    return 0;
}