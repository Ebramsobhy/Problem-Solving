/*
   =============================================================================
    Problem 33
    Write a program to ask user to enter:
    - Grade
    Then print the grade as follows:
    90 - 100 Print A
    80 - 89  Print B
    70 - 79  Print C
    60 - 69  Print D
    50 - 59  Print E
    Otherwise Print F
   ==============================================================================
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int ReadNumberInRange(int From, int To)
{
   int Grade;
   do 
   {
      cout << "Please Enter a Grade between 0 and 100?" << endl;
      cin >> Grade;
   } while (Grade < From || Grade > To);

   return Grade; 
}

void GetGradeLetter(int Grade)
{
    if(Grade >=90)
       cout << "A";
    else if (Grade >=80)
       cout << "B";
    else if (Grade >=70) 
       cout << "C";
    else if (Grade >=60) 
       cout << "D";
    else if (Grade >=50) 
       cout << "E";
    else
       cout << "F";
}

int main()
{
    GetGradeLetter(ReadNumberInRange(0, 100));
    return 0;
}