/*
   ====================================================================================
    Problem 61
    Write a program to read number and print inverted pattern as follow:
    Input : 3 
    Output : 333
             22
             1
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

void PrintInvertedNumberPattern(int Number)
{
    for (int i = Number; i >= 1; i--)
    {
         for (int j = 1; j <= i; j++)
         {
             cout << i;
         }
         cout << endl;      
    } 
}

int main()
{
    PrintInvertedNumberPattern(ReadPositiveNumber("Enter Number"));
    return 0;
}