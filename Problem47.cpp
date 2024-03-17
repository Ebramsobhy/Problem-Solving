/*
   ==================================================================================
    Problem 47
    Write a program to read a loan Amount and Monthly Payment and calculate how many
    months you need to settle the loan.
    Input: 5000, 500
    Output: 10 Months
   ==================================================================================
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float ReadPositiveNumber(string Message)
{
    float Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    
    return Number;
}   

float PaymentTotalMonths(float LoanAmount, float MonthlyPayment)
{
    return LoanAmount / MonthlyPayment;
}

int main()
{
    float LoanAmount = ReadPositiveNumber("Please Enter Loan Amount?");
    float MonthlyPayment = ReadPositiveNumber("Enter Monthly Payment");

    cout << "Total Months To Pay = " << PaymentTotalMonths(LoanAmount, MonthlyPayment) << " Months" << endl;
    return 0;
}