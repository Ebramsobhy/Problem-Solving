/*
   =============================================================================
    Problem 39
    Write a program to read a TotalBill and CashPaid and calculate the remainder
    to be paid back.
   ==============================================================================
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float ReadPositiveNumber(string Message)
{
    float Number = 0;
    cout << Message << endl;
    cin >> Number;
    return Number; 
}

float CalcRemainder(float TotalBill, float CashPaid)
{
   return CashPaid - TotalBill;
}

int main()
{
    float TotalBill = ReadPositiveNumber("Please Enter The Total Bill?");
    float CashPaid = ReadPositiveNumber("Please Enter The Cash Paid?");
    cout << endl;
    cout << "Total Bill = " << TotalBill << endl;
    cout << "Total Cash Paid = " << CashPaid << endl;

    cout << "*************************";
    cout << endl << "Remainder is: " << CalcRemainder(TotalBill, CashPaid);
    return 0;
}