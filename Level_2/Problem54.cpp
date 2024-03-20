/*
   =======================================================================================
    Problem 54
    Write a program to print all perfect numbers from 1 to N
    Input  : 500
    Output : 6, 28, 496
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

void PrintPerfectNumberFrom1ToN(int Number)
{
    for (int i = 1; i <= Number; i++)
    {
        if (isPerfectNumbers(i))
        {
            cout << i << endl;
        }
    }
}

int main()
{
    PrintPerfectNumberFrom1ToN(ReadPositiveNumber("Please Enter a Positive Number?"));
    return 0;
}