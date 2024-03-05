/*
   ==========================================================
    Problem 15
    Write a program to calculate rectangle area and Print it
    on Screen.            Area = a * b
   ==========================================================
*/

#include <iostream>
#include <string>
using namespace std;

void ReadNumbers(float& length, float& width)
{
     cout << "Enter The Length" << endl;
     cin >> length;
     cout << "Enter The Width" << endl;
     cin >> width;
}

float CalcRectangleArea(float length, float width)
{
    return length * width;
}

void PrintRectangleArea(float Area)
{
   cout << "The Rectangle Area is: " << Area;
}


int main()
{
    float length, width;
    ReadNumbers(length, width);
    PrintRectangleArea(CalcRectangleArea(length, width));
    return 0;
}

