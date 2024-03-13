/*
   =============================================================================
    Problem 37
    Write a program to read numbers from user and sum them, keep reading until
    the user enters -99 then print the sum on Screen.
    Example Input 10, 20, 30, 40
    Output 100 
   ==============================================================================
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadNumber(string Message)
{
    int Number = 0;
    cout << Message << endl;
    cin >> Number;
    return Number;
}

int CalcNumber()
{
    int Sum = 0, Number = 0, Counter = 1;
    do
    {
        Number = ReadNumber("Please Enter Number " + to_string(Counter));
        if (Number == -99)
        {
            break;
        }

        Sum += Number;
        Counter++;
        
    } while (Number != -99);
    
    return Sum;
}

int main()
{
    cout << endl << "Result " << CalcNumber() << endl;
    return 0;
}