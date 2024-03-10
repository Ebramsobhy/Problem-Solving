/*
   =============================================================================
    Problem 32
    Write a program to ask user to enter:
    - Number
    - Power
    Then print the Number^power
    Example Input 2
    Output 4
   ==============================================================================
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadNumber()
{
    int Number;
    cout << "Enter The Number" << endl;
    cin >> Number;
    return Number;
}

int ReadPower()
{
    int Power;
    cout << "Enter The Power" << endl;
    cin >> Power;
    return Power;
}

int PowerOfNumber(int Number, int Power)
{
    if (Power == 0)
    {
        return 1;
    }

    int P = 1;
    for (int i = 1; i <= Power; i++)
    {
        P *= Number;
    }

    return P;
}

int main()
{
    cout << "The Result is: " << PowerOfNumber(ReadNumber(), ReadPower());
    return 0;
}