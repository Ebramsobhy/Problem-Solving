/*
   ==========================================================
    Problem 16
    Write a program to calculate rectangle through diagonal
    and side area of rectangle and print it on the screen.
    The User Should Enter a, d
    Input 5, 40
    Output 198.431
   ==========================================================
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void ReadNumbers(float& A, float& D)
{
     cout << "Enter A" << endl;
     cin >> A;
     cout << "Enter B" << endl;
     cin >> D;
}

float CalcRectangleArea(float A, float D)
{
    float Area = A * sqrt(pow(D,2) - pow(A,2));
    return Area; 
}

void PrintRectangleArea(float Area)
{
   cout << "The Rectangle Area is: " << Area;
}


int main()
{
    float A, D;
    ReadNumbers(A, D);
    PrintRectangleArea(CalcRectangleArea(A, D));
    return 0;
}

