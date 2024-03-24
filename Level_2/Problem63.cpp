/*
   ====================================================================================
    Problem 63
    Write a program to guess a 3-Letter Password (all capital):
    Input :   AAF
    Output :  Trail [1] : AAA
              Trail [2] : AAB
              Trail [3] : AAC
              Trail [4] : AAD
              Trail [5] : AAE
              Trail [6] : AAF
         Password is AAF
         Found after 6 Trails. 
   ====================================================================================
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string ReadPassword()
{
    string Password;
    cout << "Please Enter a 3-Letter Password (all capital) ?" <<endl;
    cin >> Password;
    return Password;
}

bool GuessPassword(string OriginalPassword)
{
   string Word = "";
   int Counter = 0;

   for (int i = 65; i <= 90; i++)
   {
       for (int j = 65; j <= 90; j++)
       {
            for (int k = 65; k <= 90; k++)
            {
                 Word = Word + char(i);
                 Word = Word + char(j);
                 Word = Word + char(k);
                 Counter++;
                 cout << "Trail [" << Counter << "] : " << Word << endl;

                 if (Word == OriginalPassword)
                 {
                    cout << "Password is " << Word << endl;
                    cout << "Found After " << Counter << " Trails";
                    return true;
                 }

                 Word = "";
            }
            
       }    
   }
  return false;
}

int main()
{
    GuessPassword(ReadPassword());
    return 0;
}