/*
   =============================================================================
    Problem 41
    Write a program to read a Number Of Hours and calculates the number of weeks
    and days included in that number.
   ==============================================================================
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float ReadPositiveNumber(string message)
{
    float number;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}

float HoursToDays(float NumberOfHours)
{
    return NumberOfHours / 24;
}

float HoursToWeeks(float NumberOfHours)
{
    return NumberOfHours / 24 / 7;
}

int main()
{
    float NumberOfHours = ReadPositiveNumber("Please Enter Number Of Hours");
    float NumberOfDays = HoursToDays(NumberOfHours);
    float NumberOfWeeks = HoursToWeeks(NumberOfHours);
     
    cout << endl;
    cout << "Total Hours = " << NumberOfHours << endl;
    cout << "Total Days = " << NumberOfDays << endl;
    cout << "Total Weeks = " << NumberOfWeeks << endl;
}