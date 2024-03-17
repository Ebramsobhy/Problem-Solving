/*
   ================================================================================
    Problem 44
    Write a program to ask user to enter:
    - Day
    Then print the day as follows:
    [1- Sunday, 2- Monday, 3- Tuesday, 4- Wednesday, etc..]
    - Otherwise print "Wrong Day" and ask the user to enter the day again.
   =================================================================================
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

enum enWeekDay {Sun = 1 , Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};

void ShowWeekDayMenu()
{
    cout << "********************" << endl;
    cout << "     Week Days      " << endl;
    cout << "********************" << endl;
    cout << "1: Sunday" << endl;
    cout << "2: Monday" << endl;
    cout << "3: Tuesday" << endl;
    cout << "4: Wednesday" << endl;
    cout << "5: Thrusday" << endl;
    cout << "6: Friday" << endl;
    cout << "7: Saturday" << endl;
    cout << "********************" << endl;
}

enWeekDay ReadWeekDay(string Message, int From, int To)
{
    int wd;
    do
    {
       cout << Message << endl;
       cin >> wd;
    } while (wd < From || wd > To);
    
    return (enWeekDay)wd;
}

string GetWeekDayName(enWeekDay WeekDay)
{ 
    switch (WeekDay) {
        case enWeekDay::Sun:
        return "Sunday";
        case enWeekDay::Mon:
        return "Monday";
        case enWeekDay::Tue:
        return "Tuesday";
        case enWeekDay::Wed:
        return "Wednesday";
        case enWeekDay::Thu:
        return "Thursday";
        case enWeekDay::Fri:
        return "Friday";
        case enWeekDay::Sat:
        return "Saturday";
        default:
        return "Not a week day";
    }
}

int main()
{
    ShowWeekDayMenu();

    string Day = GetWeekDayName(ReadWeekDay("Enter Number Of Day", 1, 7));
    cout << "Today is " << Day << endl;
    return 0;
}