/*
   =============================================================================
    Problem 27
    Write a program to print numbers from N to 1
   ==============================================================================
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadNumber()
{
    int N;
    cout << "Please Enter A Number" << endl;
    cin >> N;
    return N;
}

void PrintRangeNumbers(int N)
{
    for(int Counter = N; Counter >= 1; Counter--)
    {
          cout << Counter << endl;
    }

}

int main()
{
    PrintRangeNumbers(ReadNumber());
    return 0;
}