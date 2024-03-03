/*
   =================================================
   Problem 2
   Write a program to ask the user to enter his name 
   and print it on screen.
   =================================================
*/

#include <iostream>
#include <string>
using namespace std;

string ReadName()
{
   string Name;
   cout << "Please Enter Your Name" << endl;
   getline(cin, Name);
   return Name; 
}

void PrintName(string Name)
{
    cout << "Your Name Is: " << Name << endl;
}

int main()
{
    PrintName(ReadName());
    return 0;
}
