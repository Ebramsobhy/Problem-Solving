/*
   ========================================================
    Problem 7
    Write a program to ask the user to enter:
    - Mark
    Then print "Pass" if Mark >= 50 otherwise print "Fail"
   ========================================================
*/

#include <iostream>
#include <string>
using namespace std;

enum enPassFail { Pass = 1, Fail = 2};

int ReadMark()
{
    int Mark;
    cout << "Please Enter Your Mark" << endl;
    cin >> Mark;
    return Mark;
}

enPassFail CheckMark(int Mark)
{
    if(Mark >= 50)
        return enPassFail::Pass;
    else
        return enPassFail::Fail;
}

void PrintResult(int Mark)
{
    if(CheckMark(Mark) == enPassFail::Pass)
       cout << "Pass" << endl;
    else 
       cout << "Fail" << endl;
}

int main()
{
    PrintResult(ReadMark());
    return 0;
}

