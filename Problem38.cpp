/*
   =============================================================================
    Problem 38
    Write a program to read number from user and check if it is a prime number
    or not.
    Note: Prime Number can only divide on 1 and on itself.
    Input 5
    Output Prime
    Input 6
    Output Not Prime
   ==============================================================================
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enPrimNotPrime {Prime = 1, NotPrime = 2};

float ReadPositiveNumber(string Message)
{
     float Number = 0;
     do
     {
        cout << Message << endl;
        cin >> Number;
     } while (Number <= 0);

     return Number;    
}

enPrimNotPrime CheckPrime(int Number)
{
    float M = round(Number / 2);
    for (int Counter = 2; Counter <= M; Counter++)
    {
        if (Number % 2 == 0)
            return enPrimNotPrime::NotPrime;
    }

    return enPrimNotPrime::Prime;
}

void PrintNumberType(int Number)
{
   switch (CheckPrime(Number))
   {
   case enPrimNotPrime::Prime:
    cout << "The number is Prime\n";
    break;
   case enPrimNotPrime::NotPrime:
    cout << "The number is Not Prime\n";
    break;
   }
}

int main()
{
    PrintNumberType(ReadPositiveNumber("Please Enter a Positive Number"));
    return 0;
}