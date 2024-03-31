/*
   ====================================================================================
    Problem 71
    Write a program to fill array with max size 100 with random numbers from 1 to 100
    then print Min number.
    Input : 10
    Output: 56 55 83 32 71 91 17 41 62 22
    Min Number is: 17 
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
   cout << "Array Elements : ";
   for (int i = 0; i < arrLength; i++)
     {
        cout << arr[i] << " ";
     } 
     cout << endl;
}

int MinNumberInArray(int arr[100], int arrLength)
{
    int Min = 0;
     Min = arr[0];
    for (int i = 0; i < arrLength; i++)
     {
         if (arr[i] < Min)
         {
            Min = arr[i];
         }
     }
     return Min;
}

int main()
{
   srand((unsigned)time(NULL));

   int arr[100], arrLength;   
    
    FillArrayWithRandomNumbers(arr, arrLength);
    PrintArray(arr, arrLength);
    
    cout << "Min Number is : ";
    cout << MinNumberInArray(arr, arrLength) << endl;
    return 0;
}