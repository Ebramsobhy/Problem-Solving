/*
   =============================================================================
    Problem 30
    Write a program to calculate factorial of N
    Example: factorial of 6 >> 6 x 5 x 4 x 3 x 2 x 1 = 720
    Note : User should only enter positive number, otherwise reject it and ask
    to enter again.
   ==============================================================================
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number < 0);
    
    return Number;
}

int FactorialNumber(int N)
{
    int factorial= 1;

    for(int Counter = N; Counter >= 1; Counter--)
    {
         factorial *= Counter;   
    }

    return factorial;
}

void PrintResult(int sum)
{ 
   cout << "The Factorial Is : " << sum;
}

int main()
{
    PrintResult(FactorialNumber(ReadPositiveNumber("Enter a positive number")));
    return 0;
}