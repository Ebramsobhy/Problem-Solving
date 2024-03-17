/*
   ================================================================================
    Problem 45
    Write a program to ask user to enter:
    - Month
    Then print the day as follows:
    [1- January, 2- February, 3- March, 4- April, etc..]
    - Otherwise print "Wrong Month" and ask the user to enter the day again.
   =================================================================================
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enMonthsYear 
{
    Jan = 1 , Feb = 2, Mar = 3, Apr = 4, May = 5, Jun = 6, Jul = 7, Aug = 8,
    Sep = 9 , Oct = 10, Nov = 11, Dec = 12                
};

void ShowMonthsMenu()
{
    cout << "********************" << endl;
    cout << "     Year Months    " << endl;
    cout << "********************" << endl;
    cout << "1: January" << endl;
    cout << "2: February" << endl;
    cout << "3: March" << endl;
    cout << "4: April" << endl;
    cout << "5: May" << endl;
    cout << "6: June" << endl;
    cout << "7: July" << endl;
    cout << "8: August" << endl;
    cout << "9: September" << endl;
    cout << "10: October" << endl;
    cout << "11: November" << endl;
    cout << "12: December" << endl;
    cout << "********************" << endl;
}

enMonthsYear ReadMonth(string Message, int From, int To)
{
    int MonthNumber;
    do
    {
       cout << Message << endl;
       cin >> MonthNumber;
    } while (MonthNumber < From || MonthNumber > To);
    
    return (enMonthsYear)MonthNumber;
}

string GetMonthName(enMonthsYear MonthNumber)
{ 
    switch (MonthNumber) {
        case enMonthsYear::Jan:
        return "January";
        case enMonthsYear::Feb:
        return "February";
        case enMonthsYear::Mar:
        return "March";
        case enMonthsYear::Apr:
        return "April";
        case enMonthsYear::May:
        return "May";
        case enMonthsYear::Jun:
        return "June";
        case enMonthsYear::Jul:
        return "July";
        case enMonthsYear::Aug:
        return "August";
        case enMonthsYear::Sep:
        return "September";
        case enMonthsYear::Oct:
        return "October";
        case enMonthsYear::Nov:
        return "November";
        case enMonthsYear::Dec:
        return "December";
        default:
        return "Wrong Month";
    }
}

int main()
{
    ShowMonthsMenu();

    string Month = GetMonthName(ReadMonth("Enter Number Month", 1, 7));
    cout << "Month is: " << Month << endl;
    return 0;
}