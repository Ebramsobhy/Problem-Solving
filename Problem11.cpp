/*
   ========================================================
    Problem 11
    Write a program to ask the user to enter:
    - Mark1, Mark2, Mark3
    Then print the Average of entered Marks and
    Print "Pass" if Mark >= 50 otherwise print "Fail"
   ========================================================
*/

#include <iostream>
#include <string>
using namespace std;

enum enMarksResult {Pass = 1, Fail = 2};

void ReadMarks(int& Mark1, int& Mark2, int& Mark3)
{
    cout << "Enter Mark 1" << endl;
    cin >> Mark1;
    cout << "Enter Mark 2" << endl;
    cin >> Mark2;
    cout << "Enter Mark 3" << endl;
    cin >> Mark3;
}

int SumMarks(int Mark1, int Mark2, int Mark3)
{
    return Mark1 + Mark2 + Mark3;
}

float CalcAverage(int Mark1, int Mark2, int Mark3)
{
    return (float) SumMarks(Mark1, Mark2, Mark3) / 3;
}

enMarksResult CheckMarks(float Average)
{
    if (Average >= 50)
        return enMarksResult::Pass;
    else 
        return enMarksResult::Fail;
}   

void PrintResult(float Average)
{
    cout << "The Average is: " << Average << endl;

    if (CheckMarks(Average) == enMarksResult::Pass)
        cout << "Passed" << endl;
    else
        cout << "Failed" << endl;
}

int main()
{
    int Mark1, Mark2, Mark3;
    ReadMarks(Mark1, Mark2, Mark3);
    PrintResult(CalcAverage(Mark1, Mark2, Mark3));
    return 0;
}
