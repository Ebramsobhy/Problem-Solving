/*
   ==================================================================
    Problem 21
    Write a program to calculate Circle Area along the circumference
    and print it on the screen.

    The User Should Enter L
    Example:
    Input 20
    Output 31.831
   ===================================================================
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float ReadCircumference()
{
    float L;
    cout << "Please Enter A ?" << endl;
    cin >> L;
    return L;
}

float CircleleAreaByCircumference(float L)
{
    const float PI = 3.14;
    float Area = pow(L, 2) / (4 * PI);
    return Area;
}

void PrintCircleArea(float Area)
{
    cout << "The Circle Area Is: " << Area;
}

int main()
{
    PrintCircleArea(CircleleAreaByCircumference(ReadCircumference()));
    return 0;
}