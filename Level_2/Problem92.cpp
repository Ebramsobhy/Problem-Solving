/*
   ====================================================================================
    Problem 92
    Write a program to print round of numbers, don't use built in round function.
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

int MyRound(float Number) 
{ 
    int IntPart;
    IntPart = int(Number);

    float FractionPart = GetFraction(Number);

    if (abs(FractionPart) >= .5)
    {
        if (Number > 0)
           return ++IntPart;
        else
           return --IntPart;
    }
    else
    {
       return IntPart;
    }
}

int main()
{
   float Number = ReadNumber();

   cout << "MyRound Result : " << MyRound(Number) << endl; 

   // This is built in function
   cout << "C++ round Result: " << round(Number) << endl; 
   return 0;
}