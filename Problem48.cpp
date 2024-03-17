/*
   ==================================================================================
    Problem 47
    Write a program to read a loan Amount and ask how many months you need to settle
    the loan, then calculate the monthly installment amount.
    Input: 5000, 10
    Output: 500
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

float MonthlyInstallment(float LoanAmount, float HowManyMonths)
{
    return LoanAmount / HowManyMonths;
}

int main()
{
    float LoanAmount = ReadPositiveNumber("Please Enter Loan Amount?");
    float HowManyMonths = ReadPositiveNumber("How Many Months?");

    cout << "Monthly Installment = " << MonthlyInstallment(LoanAmount, HowManyMonths) << endl;
    return 0;
}