/*
   =============================================================================
    Problem 26
    Write a program to print numbers from 1 to N
   ==============================================================================
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadNumber()
{
    int Number;
    cout << "Please Enter A Number" << endl;
    cin >> Number;
    return Number;
}

void PrintRangeNumbers(int Number)
{
    for(int Counter = 1; Counter <= Number; Counter++)
    {
          cout << Counter << endl;
    }

}

int main()
{
    PrintRangeNumbers(ReadNumber());
    return 0;
}