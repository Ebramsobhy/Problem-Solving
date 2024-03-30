/*
   ====================================================================================
    Problem 66
    Write a program to print random Small Letter, Capital Letter, Special Character
    and Digit in order.
    Example
    Output: i
            G
            $
            4
   ====================================================================================
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

enum enCharType {
   SmallLetter = 1, CapitalLetter = 2,
   SpecialCharacter = 3, Digit = 4
};

int RandomNumber(int From, int To)
{
   int randNum = rand() % (To - From + 1) + From;
   return randNum;
}

char GetRandomCharacter(enCharType CharType)
{
   switch (CharType)
   {
   case enCharType::SmallLetter:
      return char(RandomNumber(97, 122));
   case enCharType::CapitalLetter:
      return char(RandomNumber(65, 90));
   case enCharType::SpecialCharacter:
      return char(RandomNumber(33, 47));
   case enCharType::Digit:
      return char(RandomNumber(48, 57));
   default:
      throw runtime_error("Unknown Character Type");         
   }
}

int main()
{
    srand((unsigned)time(NULL));
    cout << GetRandomCharacter(enCharType::SmallLetter) << endl;
    cout << GetRandomCharacter(enCharType::CapitalLetter) << endl;
    cout << GetRandomCharacter(enCharType::SpecialCharacter) << endl;
    cout << GetRandomCharacter(enCharType::Digit) << endl;
    return 0;
}