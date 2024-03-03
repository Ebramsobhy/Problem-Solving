/*
   ===========================================
   Problem 7
   Write a program to ask the user to enter:
   - Number
   Then print the Half of the Number
   Example: 
   - Input  60
   - Output 30
   ===========================================
*/

#include <iostream>
#include <string>
using namespace std;

int ReadNumber()
{
    int Number;
    cout << "Please Enter A Number" << endl;
    cin >> Number;
    return Number;
}

float CalculateHalfNumber(int Number)
{
   return (float) Number / 2;
}

void PrintResult(int Number)
{
   string result = "Half of " + to_string(Number) + " is: " + to_string(CalculateHalfNumber(Number));
   cout << result << endl;
}

int main()
{
    PrintResult(ReadNumber());
    return 0;
}

