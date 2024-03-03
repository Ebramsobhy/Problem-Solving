/*
   =====================================================
   Problem 4
   Write a program to ask the user to enter his:
   - Age
   - Have a Driver License ?
   Then print "Hired" if his age greater than 21
   and has a driver license, otherwise print "Rejected"
   =====================================================
*/

#include <iostream>
#include <string>
using namespace std;

struct strInfo
{
   int Age;
   bool HasDriverLicence;
};

strInfo ReadInfo()
{
   strInfo Info;
   cout << "Please Enter Your Age" << endl;
   cin >> Info.Age;
   cout << "Do You Have Driver Licence?" << endl;
   cin >> Info.HasDriverLicence;

   return Info;
};

bool CheckInfo(strInfo Info)
{
   return (Info.Age > 21 && Info.HasDriverLicence);
}

void PrintResult(strInfo Info)
{
    if(CheckInfo(Info))
    {
        cout << "Hired" << endl;
    }
    else
    {
        cout << "Rejected" << endl;
    }
}

int main()
{
    PrintResult(ReadInfo());
    return 0;
}