/*
   =============================================================================
    Problem 35
    Write a program to ask user to enter:
    - Pennies, Nickels, Dimes, Quarters, Dollars
    Then calculate the total pennies, total dollars and print them on screen 
    giving that:
    Pennies = 1, Nickels = 5, Dimes = 10, Quarters = 25, dollars = 100
    Example Input: 5,5,5,5,5
    Outputs 705 Pennies, 7.05 Dollars
   ==============================================================================
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct stPiggyBankContent
{
    int Pennies, Nickels, Dimes, Quarters, Dollars;
};

stPiggyBankContent ReadPiggyBankContent()
{
    stPiggyBankContent PiggyBankContent;
    cout << "Please Enter a Total Pennies?" << endl;
    cin >> PiggyBankContent.Pennies;
    cout << "Please Enter a Total Nickels?" << endl;
    cin >> PiggyBankContent.Nickels;
    cout << "Please Enter a Total Dimes?" << endl;
    cin >> PiggyBankContent.Dimes;
    cout << "Please Enter a Total Quarters?" << endl;
    cin >> PiggyBankContent.Quarters;
    cout << "Please Enter a Total Dollars?" << endl;
    cin >> PiggyBankContent.Dollars;

    return PiggyBankContent;
}

int CaculateTotalPennies(stPiggyBankContent PiggyBankContent)
{
    int TotalPennies = 0;
    TotalPennies = PiggyBankContent.Pennies * 1 + PiggyBankContent.Nickels * 5 +
    PiggyBankContent.Dimes * 10 + PiggyBankContent.Quarters * 25 + PiggyBankContent.Dollars * 100;

    return TotalPennies;
}

int main()
{
    int TotalPennies = CaculateTotalPennies(ReadPiggyBankContent());
    cout << endl << "Total Pennies = " << TotalPennies << endl;
    cout << endl << "Total Dollars = " << (float)TotalPennies / 100 << endl;
    return 0;
}