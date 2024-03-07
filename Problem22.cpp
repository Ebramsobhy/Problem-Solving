/*
   ========================================================================
    Problem 22
    Write a program to calculate Circle Inscribed in an Isosceles Triangle
    and print it on the screen.

    The User Should Enter A, B
    Example:
    Input 20 , 10
    Output 47.124
   ==========================================================================
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void ReadCircumference(float& A, float& B)
{
    cout << "Please Enter A" << endl;
    cin >> A;
    cout << "Please Enter B" << endl;
    cin >> B;
}

float CircleleAreaByCircumference(float A, float B)
{
    float PI = 3.14;
    float Area = PI * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));
    return Area; 
}

void PrintCircleArea(float Area)
{
    cout << "The Circle Area Is: " << Area;
}

int main()
{
    float A, B;
    ReadCircumference(A, B);
    PrintCircleArea(CircleleAreaByCircumference(A, B));

    return 0;
}