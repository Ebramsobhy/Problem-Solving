/*
   ====================================================================================
    Problem 80
    Write a program to fill array with max size 100 with random numbers from 1 to 100
    and read number and return its index in array if found otherwise return -1
    Input : 10
     Array 1 Elements  : 19 83 3 29 61 31 96 64 33 77
                         Number you are looking for is: 83
                         The number found at position: 1
                         The number found its order : 2
   ====================================================================================
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

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

int RandomNumber(int From, int To)
{
   int randNum = rand() % (To - From + 1) + From;
   return randNum;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
     cout << "Enter number of elements:\n"; 
     cin >> arrLength; 

     for (int i = 0; i < arrLength; i++)
     {
        arr[i] = RandomNumber(1, 100);
     }   
}

void PrintArray(int arr[100], int arrLength)
{
   for (int i = 0; i < arrLength; i++)
     {
        cout << arr[i] << " ";
     } 
     cout << endl;
}

short FindNumberPositionInArray(int arr[100], int arrLength, int NumberToCheck)
{
    for (int i = 0; i < arrLength; i++)
     {
         if (arr[i] == NumberToCheck)
            return i;
     }
     return -1; 
}

int main()
{
   srand((unsigned)time(NULL));

   int arr[100], arrLength;
   
   FillArrayWithRandomNumbers(arr, arrLength);

   cout << "Array 1 Elements" << endl;
   PrintArray(arr, arrLength);

   int NumberToCheck = ReadPositiveNumber("Please Enter a number to search for?");
   cout << "Number you are looking for is: " << NumberToCheck << endl;

   short NumberPosition = FindNumberPositionInArray(arr, arrLength, NumberToCheck);

   if (NumberPosition == -1)
   {
      cout << "The number is not found" << endl;
   }
   else
   {
      cout << "The number found at position: "; 
      cout << NumberPosition << endl;

      cout << "The number found its order : "; 
      cout << NumberPosition + 1 << endl; 
   }

   return 0;
}