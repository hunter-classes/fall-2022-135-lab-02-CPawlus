/*
Author: Christopher Pawlus
Course: CSCI-136
Instructor: Professor Zamansky
Assignment: Loops, Arrays, and Number Sequences, fibonacci.cpp, Lab 2D.

This program prints out the fibonacci number sequence 
60 times using an array.
*/

#include <iostream>

int main() 
{
   // Variables
   const int SIZE = 60;
   int fib[SIZE];
   fib[0] = 0;
   fib[1] = 1;
   int i = 2;
   // Conditionals
   std::cout << fib[0] << "\n";
   std::cout << fib[1] << "\n";
   while(i < SIZE) 
   {
      fib[i] = fib[i-1] + fib[i-2];
      std::cout << fib[i] << "\n";
      i++;
   }
   return 0;
}

/*

What I observe in behavior of the printed numbers is that the numbers start to diverge 
and change value, I think this happens due to a memory overflow or issue since the memory 
for integers is approximately a little over -+2 billion and as the numbers grow larger it reaches 
the memory limit of a integer type value.

*/
