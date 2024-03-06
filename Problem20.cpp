/*
   ================================================================
    Problem 20
    Write a program to calculate Circle Area inscribed in a square
    and print it on the screen.

    The User Should Enter A
    Example:
    Input 10
    Output 78.54
   =================================================================
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float ReadNumber()
{
    float A;
    cout << "Please Enter A ?" << endl;
    cin >> A;
    return A;
}

float CircleleAreaByDiameter(float A)
{
    const float PI = 3.14;
    float Area = (PI * pow(A, 2)) / 4;
    return Area;
}

void PrintCircleArea(float Area)
{
    cout << "The Circle Area Is: " << Area;
}

int main()
{
    PrintCircleArea(CircleleAreaByDiameter(ReadNumber()));
    return 0;
}