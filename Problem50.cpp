/*
   =======================================================================================
    Problem 50
    Write a program to read the ATM PIN code from the user, then check if PIN Code = 1234
    then show the balance to user, otherwise print "Wrong PIN" and ask the user to enter
    the PIN again.
    Only allow user to enter the PIN 3 times, if fails, print "Card is Blocked!"
   =======================================================================================
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
    int Counter = 3;
    do
    {
        Counter--;
        PinCode = ReadPinCode();
        if (PinCode == "1234")
        {
            return true;
        }
        else {
           system("color 4F");
           cout << "Wrong PIN, You have " << Counter << " more tries" << endl; 
        }
    } while (Counter >= 1 && PinCode != "1234");

    return false;
}

int main()
{
    if (Login())
    {
        system("color 2F");
        cout << "Your account balance is " << 7500 << endl;
    } 
    else {
        cout << "Your Card blocked call the bank for help" << endl;
    };
    return 0;
}