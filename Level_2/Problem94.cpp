/*
   ====================================================================================
    Problem 94
    Write a program to print ceil of numbers, don't use built in round function.
    Input: 10.7
    Output: 11
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

float GetFraction(float Number)
{
   return Number - int(Number);
}

int MyCeil(float Number) 
{ 
   if (GetFraction(Number) > 0)
       if (Number > 0)
          return int(Number) + 1;
       else
          return int(Number);
   else
     return Number;
}

int main()
{
   float Number = ReadNumber();

   cout << "MyCeil Result : " << MyCeil(Number) << endl; 

   // This is built in function
   cout << "C++ ceil Result: " << ceil(Number) << endl; 

   return 0;
}