/*
   =============================================================================
    Problem 25
    Write a program to ask user to enter:
    - Age
    If Age is between 18 and 45 print "Valid Age" otherwise print "Invalid Age"
    and re-ask user to enter a valid age.
    Note : You should keep asking user to enter a valid age until he enters it.
   ==============================================================================
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadAge()
{
    int Age;
    cout << "Please Enter Age Between 18 to 45" << endl;
    cin >> Age;
    return Age;
}

bool CheckAge(int Age, int From, int To)
{
     return (Age >= From && Age <= To);
}

int ReadUntilAgeBetween(int From, int To)
{
    int Age = 0;

    do {
        Age = ReadAge();
    } while(!CheckAge(Age, From, To));
  
    return Age;
}

void PrintResult(int Age)
{
    cout << Age << " Valid Age";
}

int main()
{
    PrintResult(ReadUntilAgeBetween(18, 45));
    return 0;
}