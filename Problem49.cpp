/*
   ==================================================================================
    Problem 49
    Write a program to read the ATM PIN code from the user, then check if PIN Code = 1234
    then show the balance to user, otherwise print "Wrong PIN" and ask the user to enter
    the PIN again.
   ==================================================================================
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string ReadPinCode()
{
    string PinCode;
    cout << "Please Enter PIN Code" << endl;
    cin >> PinCode;
    return PinCode;
}

bool Login()
{
    string PinCode;
    do
    {
        PinCode = ReadPinCode();
        if (PinCode == "1234")
        {
            return true;
        }
        else {
           cout << "Wrong PIN" << endl;
           system("color 4F");
        }
    } while (PinCode != "1234");

    return false;
}

int main()
{
    if (Login())
    {
        system("color 2F");
        cout << "Your account balance is " << 7500 << endl;
    };
    return 0;
}