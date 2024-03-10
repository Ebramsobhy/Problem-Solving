/*
   =============================================================================
    Problem 31
    Write a program to ask user to enter:
    Number 
    Then print the Number^2, Number^3, Number^4
    Example:
    Input 3
    Output : 9, 27, 81
   ==============================================================================
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadNumber()
{
    int Number;
    cout << "Please Enter a Number" << endl;
    cin >> Number;
    return Number;
}

void PowerOf2_3_4(int Number)
{
    int a, b, c;
    a = Number * Number;
    b = Number * Number * Number;
    c = Number * Number * Number * Number;
    cout << a << " " << b << " " << c << endl;
}

int main()
{
    PowerOf2_3_4(ReadNumber());
    return 0;
}