/*
   =============================================================================
    Problem 29
    Write a program to Sum Odd numbers from 1 to N
   ==============================================================================
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enOddOrEven {Odd = 1, Even = 2};

int ReadNumber()
{
    int N;
    cout << "Please Enter A Number" << endl;
    cin >> N;
    return N;
}

enOddOrEven CheckOddOrEven(int Number)
{
     if (Number % 2 == 0)
         return enOddOrEven::Even;
     else 
         return enOddOrEven::Odd;
}

int SumOddNumbers(int N)
{
    int sum= 0;

    for(int Counter = 1; Counter <= N; Counter++)
    {
          if(CheckOddOrEven(Counter) == enOddOrEven::Odd)
          {
             sum += Counter;
          }   
    }

    return sum;
}

void PrintResult(int sum)
{ 
   cout << "The Sum Is : " << sum;
}

int main()
{
    PrintResult(SumOddNumbers(ReadNumber()));
    return 0;
}