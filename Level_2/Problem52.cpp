/*
   =======================================================================================
    Problem 51
    Write a program to print all prime numbers from 1 to N.
   =======================================================================================
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enPrimeNotPrime {Prime = 1, NotPrime = 2};

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

enPrimeNotPrime CheckPrime(int Number)
{
   int M = round(Number / 2);
   for (int Counter = 2; Counter <= M; Counter++)
   {
       if (Number % Counter == 0)
           return enPrimeNotPrime::NotPrime;
   }

   return enPrimeNotPrime::Prime;
}

void PrintPrimeNumbersFrom1ToN(int Number)
{
    cout << "Prime Numbers From " << 1 << " To " << Number;
    cout << " are : " << endl;

    for (int i = 1; i <= Number; i++)
    {
         if (CheckPrime(i) == enPrimeNotPrime::Prime)
         {
             cout << i << endl;
         }
    }
}

int main()
{
    PrintPrimeNumbersFrom1ToN(ReadPositiveNumber("Please Enter Positive Number"));
    return 0;
}