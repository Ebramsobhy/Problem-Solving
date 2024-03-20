/*
   =======================================================================================
    Problem 53
    Write a program to check if the number is Perfect or Not?
    Note: Perfect Number = Sum (all divisors)
    28  = 1 + 2 + 4 + 7 + 14 (Perfect)
    12 != 1 + 2 + 4 + 6 (Not Perfect)
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

bool isPerfectNumbers(int Number)
{
    int Sum = 0;
    for (int i = 1; i < Number; i++)
    {
        if (Number % i == 0)
        {
            Sum += i;
        }
    }

    return Number == Sum;
}

void PrintResult(int Number)
{
    if (isPerfectNumbers(Number))
       cout << Number << " Is Perfect Number." << endl;
    else
       cout << Number << " Is Not Perfect Number." << endl;
}

int main()
{
    PrintResult(ReadPositiveNumber("Please Enter a Positive Number?"));
    return 0;
}