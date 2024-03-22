/*
   =======================================================================================
    Problem 56
    Write a program to read number and print the sum of its digits.
    Input : 1234
    Output : 10
   =======================================================================================
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadPositiveNumber(string Message)
{
   int Number = 0;
   do
   {
     cout << Message << endl;
     cin >> Number;
   } while (Number <= 0);
   
   return Number;
}

int SumOfDigits(int Number)
{
    int Remainder = 0, Sum = 0;
    
    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        Sum += Remainder;
    }
    return Sum;
}

int main()
{
    int Result = SumOfDigits(ReadPositiveNumber("Enter a positive number"));
    cout << "The Sum Of Digits : " << Result;  
    return 0;
}