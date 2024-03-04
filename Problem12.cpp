/*
   ========================================================
    Problem 12
    Write a program to ask the user to enter:
    - Number1, Number2
    Then print the Max Number
    Example:
    Input 10, 20
    Output 20
   ========================================================
*/

#include <iostream>
#include <string>
using namespace std;

void ReadNumbers(int& Num1, int& Num2)
{
    cout << "Enter Number 1" << endl;
    cin >> Num1;
    cout << "Enter Number 2" << endl;
    cin >> Num2; 
}

int MaxNumber(int Num1, int Num2)
{
     if (Num1 > Num2)
        return Num1;
     else 
        return Num2;
}

void PrintMaxNum(int Max)
{
    cout << "The Max Number is: " << Max;
}


int main()
{
    int Num1, Num2;
    ReadNumbers(Num1, Num2);
    PrintMaxNum(MaxNumber(Num1, Num2));
    return 0;
}
