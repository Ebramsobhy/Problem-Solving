/*
   ====================================================================================
    Problem 93
    Write a program to print floor of numbers, don't use built in round function.
    Input: 10.7
    Output: 10
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

int MyFloor(float Number) 
{ 
    if (Number > 0)
       return int(Number);
    else
       return int(Number) - 1;
}

int main()
{
   float Number = ReadNumber();

   cout << "MyRound Result : " << MyFloor(Number) << endl; 

   // This is built in function
   cout << "C++ round Result: " << floor(Number) << endl; 

   return 0;
}