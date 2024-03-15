/*
   ================================================================================
    Problem 42
    Write a program to calculate the task duration in seconds and print it on 
    the screen.
    Given the time of task duration in the number of days, hours, minutes, seconds.
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

strTaskDuration ReadTaskDuration()
{
    strTaskDuration TaskDuration;
    TaskDuration.NumberOfDays = ReadPositiveNumber("Please Enter Number Of Days");
    TaskDuration.NumberOfHours = ReadPositiveNumber("Please Enter Number Of Hours");
    TaskDuration.NumberOfMinutes = ReadPositiveNumber("Please Enter Number Of Minutes");
    TaskDuration.NumberOfSeconds = ReadPositiveNumber("Please Enter Number Of Seconds");
    return TaskDuration;
}

int TaskDurationInSeconds(strTaskDuration TaskDuration)
{
    int DurationInSeconds = 0;
    DurationInSeconds = TaskDuration.NumberOfDays * 24 * 60 *60;
    DurationInSeconds += TaskDuration.NumberOfHours * 60 * 60;
    DurationInSeconds += TaskDuration.NumberOfMinutes * 60;
    DurationInSeconds += TaskDuration.NumberOfSeconds;

    return DurationInSeconds;
}

int main()
{
    int totalSeconds = TaskDurationInSeconds(ReadTaskDuration());
    cout << "Task Duration In Seconds: " << totalSeconds;
    return 0;
}
