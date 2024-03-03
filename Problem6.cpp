/*
   ==========================================
   Problem 6
   Write a program to ask the user to enter:
   - First Name
   - Last Name
   Then Print Full Name on Screen.
   ==========================================
*/

#include <iostream>
#include <string>
using namespace std;

struct strInfo
{
    string FirstName;
    string LastName;
};

strInfo ReadInfo()
{
    strInfo Info;
    cout << "Enter First Name" << endl;
    cin >> Info.FirstName;
    cout << "Enter Last Name" << endl;
    cin >> Info.LastName;

    return Info;
}

string GetFullName(strInfo Info)
{
    string FullName="";
    FullName = Info.FirstName + " " + Info.LastName;
    return FullName;
}

void PrintInfo(string FullName)
{
   cout << "The Full Name Is: " << FullName << endl;
}

int main()
{
    PrintInfo(GetFullName(ReadInfo()));
    return 0;
}

