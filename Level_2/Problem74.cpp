/*
   ====================================================================================
    Problem 74
    Write a program to fill array with max size 100 with random numbers from 1 to 100
    then copy it to another array and print it.
    Input : 10
     Array 1 Elements : 4 82 48 62 41 85 73 29 37 85
     Array 2 Elements : 4 82 48 62 41 85 73 29 37 85
   ====================================================================================
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int RandomNumber(int From, int To)
{
   int randNum = rand() % (To - From + 1) + From;
   return randNum;
}

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
     cout << "Enter The Number of Elements" << endl;
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

void CopyArray(int arrSource[100], int arrDestination[100], int arrLength)
{
   for (int i = 0; i < arrLength; i++)
     {
        arrDestination[i] = arrSource[i];
     }
}

int main()
{
   srand((unsigned)time(NULL));

   int arr[100], arrLength;   
    
   FillArrayWithRandomNumbers(arr, arrLength);
   
   int arr2[100];
   CopyArray(arr, arr2, arrLength);

   cout << "Array 1 Elements : " << endl;
   PrintArray(arr, arrLength);
    
   cout << "Array 2 Elements : " << endl;
   PrintArray(arr2, arrLength);

   return 0;
}