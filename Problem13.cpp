/*
   ========================================================
    Problem 13
    Write a program to ask the user to enter:
    - Number1, Number2, Number3
    Then print the Max Number
    Example:
    Input 10, 20, 50
    Output 50
   ========================================================
*/

#include <iostream>
#include <string>
using namespace std;

void ReadNumbers(int& Num1, int& Num2, int& Num3)
{
    cout << "Enter Number 1" << endl;
    cin >> Num1;
    cout << "Enter Number 2" << endl;
    cin >> Num2;
    cout << "Enter Number 3" << endl;
    cin >> Num3;  
}

int MaxNumber(int Num1, int Num2, int Num3)
{
      if (Num1 > Num2)
          if (Num1 > Num3)
              return Num1;
          else 
              return Num3;
      else
         if (Num2 > Num3)
             return Num2;
         else
             return Num3;
    
}

void PrintMaxNum(int Max)
{
    cout << "The Max Number is: " << Max;
}


int main()
{
    int Num1, Num2, Num3;
    ReadNumbers(Num1, Num2, Num3);
    PrintMaxNum(MaxNumber(Num1, Num2, Num3));
    return 0;
}

