/*
   =======================================================================================
    Problem 55
    Write a program to read number and print it in a reversed order.
    Input : 1234
    Output : 4
             3
             2
             1
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

void PrintDigits(int Number)
{
    int Remainder = 0;
    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;
        cout << Remainder << endl;
    }
}

int main()
{
    PrintDigits(ReadPositiveNumber("Enter a positive number"));
    return 0;
}