/*
   ========================================================
    Problem 14
    Write a program to ask the user to enter:
    - Number1, Number2
    Then print the Two Numbers, then Swap the two numbers 
    and print them
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

void Swap(int& A, int& B)
{
    int temp = A;
    A = B;
    B = temp;
}

void PrintNumbers(int& Num1, int Num2)
{
    cout << "\n Number1 = " << Num1 << endl;
    cout << "\n Number2 = " << Num2 << endl;
}

int main()
{
    int Num1, Num2;
    ReadNumbers(Num1, Num2);
    PrintNumbers(Num1,Num2);
    swap(Num1,Num2);
    PrintNumbers(Num1,Num2);
    return 0;
}

