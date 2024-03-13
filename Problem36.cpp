/*
   =============================================================================
    Problem 36
    Write a program to ask user to enter:
    - Number1
    - Number2
    - OperationType
    Then perform the calculation according to the Operation Type [+] [-] [*] [/]
   ==============================================================================
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enOperationsType {addition = '+', subtract = '-', multiply = '*', divide = '/'};

float ReadNumber(string Message)
{
    float Number = 0;
    cout << Message << endl;
    cin >> Number;
    return Number;
}

enOperationsType ReadOpType()
{
   char OperationType = '+';
   cout << "Please enter operation type [+] [-] [*] [/]?" << endl;
   cin >> OperationType;
   return (enOperationsType) OperationType;
}

float Calculate(float Number1, float Number2, enOperationsType OpType)
{
    switch (OpType)
    {
    case enOperationsType::addition:
        return Number1 + Number2;
    case enOperationsType::subtract:
        return Number1 - Number2;
    case enOperationsType::multiply:    
        return Number1 * Number2;
    case enOperationsType::divide:
        return Number1 / Number2;
    default:
        return Number1 + Number2;
    }
}

int main()
{
    float Number1 = ReadNumber("Enter The First Number");
    float Number2 = ReadNumber("Enter The Second Number");

    enOperationsType OpType = ReadOpType();

    cout << endl << "Result = " << Calculate(Number1, Number2, OpType);
    return 0;
}