/*
   ==========================================================
    Problem 19
    Write a program to calculate Circle Area through diameter
    and print it on the screen.

    The User Should Enter D
    Example:
    Input 10
    Output 78.54
   ==========================================================
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float ReadDiameter()
{
    float D;
    cout << "Please Enter Diameter D ?" << endl;
    cin >> D;
    return D;
}

float CircleleAreaByDiameter(float D)
{
    const float PI = 3.14;
    float Area = (pow(D, 2) * PI) / 4;
    return Area;
}

void PrintCircleArea(float Area)
{
    cout << "The Circle Area Is: " << Area;
}

int main()
{
    PrintCircleArea(CircleleAreaByDiameter(ReadDiameter()));
    return 0;
}