/*  
    =================================================
    Problem 3
    Write a program to ask the user to enter a number
    then print its "Odd" odd Or "Even"
    ================================================= 
*/

#include <iostream>
#include <string>
using namespace std;

enum enNumberType {Odd = 1, Even = 2};

int ReadNumber()
{
    int Number;
    cout << "Please Enter A Number" << endl;
    cin >> Number;
    return Number;
}

enNumberType CheckNumberType(int Number)
{
   int result = Number % 2;
   if(result == 0)
   {
      return enNumberType::Even;
   }
   else
   {
      return enNumberType::Odd;
   }
}

void PrintNumberType(enNumberType NumberType)
{
    if(NumberType == enNumberType::Even)
    {
        cout << "Number is Even \n";    
    }
    else
    {
        cout << "Number is Odd \n";
    }
}

int main()
{
    PrintNumberType(CheckNumberType(ReadNumber()));
    return 0;
}
