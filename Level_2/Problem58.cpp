/*
   =======================================================================================
    Problem 58
    Write a program to read a number, then print all digit frequency in that number.
    Input : 1223222
    Output : Digit 1 Frequency is 1 Times.
             Digit 2 Frequency is 5 Times.
             Digit 3 Frequency is 1 Times.
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

void PrintAllDigitsFrequencey(int Number)
{
   for (int i = 0; i < 10; i++)
   {
       short DigitFrequency = 0;
       DigitFrequency = CountDigitFrequency(i, Number);

       if (DigitFrequency > 0)
       {
         cout << "Digit " << i << " Frequencey is " << DigitFrequency << " Times" << endl;
       }
   }
   
}

int main()
{
    int Number = ReadPositiveNumber("Please Enter The Main Number");
    PrintAllDigitsFrequencey(Number);
    return 0;
}