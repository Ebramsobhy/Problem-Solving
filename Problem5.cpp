/*
   =========================================================
   Problem 5
   Write a program to ask the user to enter his:
   - Age
   - Have a Driver License ?
   - Have a Recommendation ?
   Then print "Hired" if his age greater than 21
   and has a driver license, otherwise print "Rejected"
   Or "Hired" without conditions if he have Recommendation
   ==========================================================
*/


#include <iostream>
#include <string>
using namespace std;

struct strInfo
{
    int Age;
    bool HasDriverLicence;
    bool HasRecommendation;
};

strInfo ReadInfo()
{
    strInfo Info;
    cout << "Please Enter Your Age" << endl;
    cin >> Info.Age;
    cout << "Do You have a driver licence?" << endl;
    cin >> Info.HasDriverLicence;
    cout << "Do You have a recommendation?" << endl;
    cin >> Info.HasRecommendation;

    return Info;
}

bool CheckInfo(strInfo Info)
{  
   return (Info.Age > 20 && Info.HasDriverLicence || Info.HasRecommendation);
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