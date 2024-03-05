/*
   ==========================================================
    Problem 18
    Write a program to calculate Circle Area and
    print it on the screen.

    The User Should Enter R
    Example:
    Input 5
    Output 78.54
   ==========================================================
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float ReadRadious()
{
    float R;
    cout << "Please Enter Radious R ?" << endl;
    cin >> R;
    return R;
}

float CircleleArea(float R)
{
    const float PI = 3.14;
    float Area = pow(R, 2) * PI;
    return Area;
}

void PrintCircleArea(float Area)
{
    cout << "The Circle Area Is: " << Area;
}

int main()
{
    PrintCircleArea(CircleleArea(ReadRadious()));
    return 0;
}