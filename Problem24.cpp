/*
   =============================================================================
    Problem 25
    Write a program to ask user to enter:
    - Age
    If Age is between 18 and 45 print "Valid Age" otherwise print "Invalid Age"
    and re-ask user to enter a valid age.
   ==============================================================================
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadAge()
{
    int Age;
    cout << "Enter Your Age" << endl;
    cin >> Age;
    return Age;
}

bool CheckAge(int Age, int From, int To)
{
     return (Age >= From && Age <= To);
}

void PrintResult(int Age)
{
    if(CheckAge(Age, 18, 45))
       cout << Age << " Is a valid Age \n";
    else
       cout << Age << " Invalid Age \n";
}

int main()
{
    PrintResult(ReadAge());
    return 0;
}