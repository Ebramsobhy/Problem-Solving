/*
   ==========================================================
    Problem 17
    Write a program to calculate Triangle Area and
    print it on the screen.

    The User Should Enter A, H
    Example:
    Input 10, 8
    Output 40
   ==========================================================
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void ReadNumbers(float& A, float& H)
{
    cout << "Enter A" << endl;
    cin >> A;
    cout << "Enter H" << endl;
    cin >> H;
}

float CalcTriangleArea(float A, float H)
{
    float Area = (A / 2) * H;
    return Area;
}

void PrintTraingleArea(float Area)
{
    cout << "The Triangle Area Is: " << Area;
}

int main()
{
    float A, H;
    ReadNumbers(A, H);
    PrintTraingleArea(CalcTriangleArea(A, H));
    return 0;
}

