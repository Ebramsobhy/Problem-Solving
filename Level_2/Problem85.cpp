/*
   ====================================================================================
    Problem 85
    Write a program to fill array with numbers, then print distinct numbers to another
    array.
        Array 1 Elements:           10 10 10 50 50 70 70 70 70 90 
        Array 2 Distinct Elements:  10 50 70 90       
   ====================================================================================
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

void FillArray(int arr[100], int& arrLength)
{
     arrLength = 10;
     arr[0] = 10;
     arr[1] = 10;
     arr[2] = 10;
     arr[3] = 50;
     arr[4] = 50;
     arr[5] = 70;
     arr[6] = 70;
     arr[7] = 70;
     arr[8] = 70;
     arr[9] = 90; 
}

void PrintArray(int arr[100], int arrLength)
{
   for (int i = 0; i < arrLength; i++)
     {
        cout << arr[i] << " ";
     } 
     cout << endl;
}

short FindNumberPositionInArray(int Number, int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] == Number)
        {
           return i; // Return the index
        }
    }
    // If you reached here, this mean the number is not found
    return -1;
}

bool IsNumberInArray(int Number, int arr[100], int arrLength)
{
   return FindNumberPositionInArray(Number, arr, arrLength) != -1;
}

void AddArrayElement(int Number, int arr[100], int& arrLength)
{
   arr[arrLength] = Number;
   arrLength++;
}

void CopyDistinctNumbersToNewArray(int arrSource[100], int arrDestination[100], int SourceLength, int& DestinationLength)
{
    for (int i = 0; i < SourceLength; i++)
    {
       if (!IsNumberInArray(arrSource[i], arrDestination, DestinationLength))
       {
           AddArrayElement(arrSource[i], arrDestination, DestinationLength);
       }
    } 
}

int main()
{
  
   int arrSource[100], SourceLength = 0, arrDestination[100], DestinationLength = 0;
   FillArray(arrSource, SourceLength);
   
   cout << "Array 1 Elements: \n";
   PrintArray(arrSource, SourceLength);

   CopyDistinctNumbersToNewArray(arrSource, arrDestination, SourceLength, DestinationLength);

   cout << "Array 2 Distinct Elements: \n";
   PrintArray(arrDestination, DestinationLength);

   return 0;
}