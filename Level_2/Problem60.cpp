/*
   ====================================================================================
    Problem 60
    Write a program to read number and check if it is Palindrome?
    Note: Palindrome is a number that reads the same from right to left
    Input : 1234   Output => No, It's Not a Palindrome Number.
    Input : 12321  Output => Yes, It's a Palindrome Number.
   ====================================================================================
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

int ReverseNumber(int Number)
{
    int Remainder = 0, Number2 = 0;
    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        Number2 = Number2 * 10 + Remainder;
    }

    return Number2;  
}


bool IsPalindromeNumber(int Number)
{
    return Number == ReverseNumber(Number);
}

int main()
{
    if (IsPalindromeNumber(ReadPositiveNumber("Please Enter a Positive Number")))
        cout << "Yes, It is a Palindrome Number" << endl;
    else 
        cout << "No, It is Not a Palindrome Number" << endl;
    return 0;
}