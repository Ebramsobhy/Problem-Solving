/*
   =======================================================================================
    Problem 57
    Write a program to read a digit and number, then print digit frequency in that number.
    Input : 1223222
    Output : Digit 2 Frequency is 5 Times.
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

int CountDigitFrequency(short DigitToCheck, int Number)
{
    int FreqCount = 0, Remainder = 0;
    while (Number > 0)
    {
        Remainder = Number % 10;
        Number = Number / 10;

        if (DigitToCheck == Remainder)
        {
            FreqCount++;
        }
    }
    return FreqCount; 
}

int main()
{
    int Number = ReadPositiveNumber("Please Enter The Main Number");
    short DigitToCheck = ReadPositiveNumber("Please Enter One Digit To Check");
    cout << "Digit " <<  DigitToCheck << " Frequency is " << CountDigitFrequency(DigitToCheck, Number);
    return 0;
}