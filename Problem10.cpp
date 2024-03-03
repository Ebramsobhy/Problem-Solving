/*
   ============================================
    Problem 10
    Write a program to ask the user to enter:
    - Mark1, Mark2, Mark3
    Then print the Average of entered Marks
    Example:
    - Input  90, 80, 70
    - Output 80
    ============================================
*/

#include <iostream>
#include <string>
using namespace std;

void ReadMarks(int& Mark1, int& Mark2, int& Mark3)
{
   cout << "Please Enter The Mark 1" << endl;
   cin >> Mark1;
   cout << "Please Enter The Mark 2" << endl;
   cin >> Mark2;
   cout << "Please Enter The Mark 3" << endl;
   cin >> Mark3;
}

int SumOfNumbers(int Mark1, int Mark2, int Mark3)
{
    return Mark1 + Mark2 + Mark3;
}

float CaclAverage(int Mark1, int Mark2, int Mark3)
{
    return (float)SumOfNumbers(Mark1, Mark2, Mark3) / 3;
}

void PrintResult(float Average)
{
    cout << "The Average of Marks is: " << Average;
}

int main()
{
    int Mark1, Mark2, Mark3;

    ReadMarks(Mark1, Mark2, Mark3);
    PrintResult(CaclAverage(Mark1, Mark2, Mark3));
    return 0;
}