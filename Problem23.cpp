/*
   ============================================================================
    Problem 23
    Write a program to calculate Circle described around an arbitrary traingle
    and print it on the screen.

    The User Should Enter A, B, C
    Example:
    Input 5, 6, 7
    Output 40.088
   =============================================================================
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void ReadTraingleData(int& A, int& B, int& C)
{
    cout << "Please Enter A" << endl;
    cin >> A;
    cout << "Please Enter B" << endl;
    cin >> B;
    cout << "Please Enter C" << endl;
    cin >> C;
}

float CircleleAreaByTraingle(int A, int B, int C)
{
    float PI = 3.14;
    float P = (A + B + C) / 2;
    float T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));
    float Area = PI * pow(T, 2);
    return Area; 
}

void PrintCircleArea(float Area)
{
    cout << "The Circle Area Is: " << Area;
}

int main()
{
    int A, B, C;
    ReadTraingleData(A, B, C);
    PrintCircleArea(CircleleAreaByTraingle(A, B, C));

    return 0;
}