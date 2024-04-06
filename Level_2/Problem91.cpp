/*
   ====================================================================================
    Problem 91
    Write a program to print abs of numbers, don't use built in abs function.
    Input: -8
    Output: 8
   ====================================================================================
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

float ReadNumber() 
{ 
    float Number; 
    cout << "Please enter a number?" << endl; 
    cin >> Number; 
    return Number; 
} 

float MyABS(float Number) 
{ 
    if (Number > 0) 
       return Number; 
    else
       return Number * -1; 
}

int main()
{
   float Number = ReadNumber();

   cout << "My abs Result : " << MyABS(Number) << endl; 

   // This is built in function
   cout << "C++ abs Result: " << abs(Number) << endl; 
   return 0;
}