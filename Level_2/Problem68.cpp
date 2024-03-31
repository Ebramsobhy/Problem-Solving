/*
   ====================================================================================
    Problem 68
    Write a program to read N elements and store them in array then print all array
    elements and ask for a number to check, then print how many number a certain element
    is repeated in that array.
    Input : 5
    Output: Element [1] : 1
            Element [2] : 1
            Element [3] : 1
            Element [4] : 2
            Element [5] : 3
       Original array: 11123
       1 is repeated 3 times    
   ====================================================================================
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
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

void ReadArray(int arr[100], int& arrLength)
{
     cout << "Enter The Number of Elements" << endl;
     cin >> arrLength;
     
     cout << "Enter Array Elements" << endl;
     for (int i = 0; i < arrLength; i++)
     {
        cin >> arr[i];
     }   
}

void PrintArray(int arr[100], int& arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
       cout << "Element [" << i + 1 << "] : ";
       cout << arr[i] << endl;
    }  
}

int TimesRepeated(int Number, int arr[100], int& arrLength)
{
   int Count = 0;
    for (int i = 0; i < arrLength; i++)
    {
         if (Number == arr[i])
         {
             Count++;
         }
    }
    return Count;  
}

int main()
{
    int arr[100], arrLength, NumberToCheck;   
    ReadArray(arr, arrLength);

    NumberToCheck = ReadPositiveNumber("Enter The Number To Check");

    cout << "Original array: " << endl;
    PrintArray(arr, arrLength);
    
    cout << "Number " << NumberToCheck << " is repeated ";
    cout << TimesRepeated(NumberToCheck, arr, arrLength) << " times";

    return 0;
}