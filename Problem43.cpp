/*
   ================================================================================
    Problem 43
    Write a program to takes input number of seconds and change it to days, hours,
    minutes and seconds.
   =================================================================================
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct strTaskDuration
{
    int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

int ReadPositiveNumber(string message)
{
    int number;
    do
    {
        cout << message << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}

strTaskDuration SecondsToTaskDuration(int TotalSeconds)
{
    strTaskDuration TaskDuration;
    const int SecondsPerDay = 24 * 60 * 60;
    const int SecondsPerHour = 60 * 60;
    const int SecondsPerMinute = 60;
    
    int Remainder = 0;
    TaskDuration.NumberOfDays = floor(TotalSeconds / SecondsPerDay);
    Remainder = TotalSeconds % SecondsPerDay;
    TaskDuration.NumberOfHours = floor(Remainder / SecondsPerHour);
    Remainder = Remainder % SecondsPerHour;
    TaskDuration.NumberOfMinutes = floor(Remainder / SecondsPerMinute);
    Remainder = Remainder % SecondsPerMinute;
    TaskDuration.NumberOfSeconds = Remainder;

    return TaskDuration;
}

void PrintTaskDurationDetails(strTaskDuration TaskDuration)
{
     cout << TaskDuration.NumberOfDays << " Days, "
          << TaskDuration.NumberOfHours << " Hours, "
          << TaskDuration.NumberOfMinutes << " Minutes, "
          << TaskDuration.NumberOfSeconds << " Seconds";
}

int main()
{
    int TotalSeconds = ReadPositiveNumber("Please Enter Total Seconds?");
    PrintTaskDurationDetails(SecondsToTaskDuration(TotalSeconds));
    return 0;
}