/*
   =============================================================================
    Problem 40
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

float TotalBillAfterServiceAndTax(float BillValue)
{
    float ServiceFee = BillValue * (10.0 / 100.0);   // Calculate the service fee
    float SalesTax = (BillValue + ServiceFee) * (16.0 / 100.0);   // Calculate the sales tax on the total amount including service fee
    return BillValue + ServiceFee + SalesTax;  // Return the total bill value including both service fee and sales tax
}

int main()
{
    float BillValue = ReadPositiveNumber("Please Enter The Bill Value");
    cout << endl;

    cout << "Bill Value = " << BillValue << endl;
    cout << "Bill Value After Service Fee and Sales Tax = "
         << TotalBillAfterServiceAndTax(BillValue) << endl;

    return 0;
}