/*
   ====================================================================================
    Problem 67
    Write a program to read how many keys to generate and print them on the screen.
    Input : 2
    Output: Key [1] : ETAI-HVFG-ADFG-AERW
            Key [2] : TAFN-ALDQ-YTAX-KEOV   
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

int ReadPositiveNumber(string Message)
{
   int Number = 0;
   do
   {
     cout << Message << endl;
     cin >> Number;
   } while (Number <= 0);
   
   return Number;
}

string GenerateWord(enCharType CharType, short Length)
{
   string Word;
   for (int i = 1; i <= Length; i++)
   {
      Word += GetRandomCharacter(CharType);
   }
   return Word;
}

string GenerateKey()
{
   string Key = "";
   Key = GenerateWord(enCharType::CapitalLetter, 4) + "-";
   Key += GenerateWord(enCharType::CapitalLetter, 4) + "-";
   Key += GenerateWord(enCharType::CapitalLetter, 4) + "-";
   Key += GenerateWord(enCharType::CapitalLetter, 4);

   return Key;
}

void GenerateKeys(short NumberOfKeys)
{
    for (int i = 1; i <= NumberOfKeys; i++)
    {
       cout << "Key [" << i << "] : ";
       cout << GenerateKey() << endl;
    }   
}

int main()
{
    srand((unsigned)time(NULL));
    GenerateKeys(ReadPositiveNumber("Pleaes enter how many keys to generate?"));
    return 0;
}