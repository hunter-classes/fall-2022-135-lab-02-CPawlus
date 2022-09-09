/*
Author: Christopher Pawlus
Course: CSCI-136
Instructor: Professor Zamansky
Assignment: Loops, Arrays, and Number Sequences, edit-array.cpp, Lab 2C.

This program asks the user for a certain index and value that 
will be placed in the myData[] array. It updates the arrays contents
if the index is in range and exits if the index is out of range.
*/

#include <iostream>

int main() 
{
    // Variables
    const int SIZE = 10;
    int myData[SIZE];
    int inp_ind, inp_val;
    std::cout << "\n";
    // Array filling
    for(int i = 0; i < SIZE; i++) 
    {
        myData[i] = 1;
        std::cout << myData[i] << " ";
    }
    // Conditionals
    do {
        std::cout << "\n\nInput index: ";
        std::cin >> inp_ind;
        std::cout << "Input value: ";
        std::cin >> inp_val;
        myData[inp_ind] = inp_val;

        if(inp_ind < SIZE)
        {
            for(int i = 0; i < SIZE; i++) 
            {
                std::cout << myData[i] << " ";
            }
        }
        std::cout << "\n";
    } while((inp_ind < SIZE) || (inp_ind < -1));
    std::cout << "\nIndex out of range. Exit.\n" ;
    return 0;
}