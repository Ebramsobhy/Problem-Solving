/*
   ====================================================================================
    Problem 62
    Write a program to read number and print pattern as follow:
    Input : 3 
    Output : 1
             22
             333
   ====================================================================================
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadPositiveNumber(string Message)
{
   int Number = 0;
   do
   {
     cout << Message << endl;
     cin >> Number;
   } while (Number <= 0);
   
   return Number;
}

void PrintNumberPattern(int Number)
{
    for (int i = 1; i <= Number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        } 
        cout << endl;
    }; 
}

int main()
{
    PrintNumberPattern(ReadPositiveNumber("Please Enter Number"));
    return 0;
}