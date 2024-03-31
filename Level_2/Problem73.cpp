/*
   ====================================================================================
    Problem 73
    Write a program to fill array with max size 100 with random numbers from 1 to 100
    then print Average of all numbers.
    Input : 10
    Output: 4 82 48 62 41 85 73 29 37 85
    Sum is: 546
    Average is : 54.6 
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

int SumNumbersOfArray(int arr[100], int arrLength)
{
    int Sum = 0;

    for (int i = 0; i < arrLength; i++)
     {
         Sum += arr[i];
     }
     return Sum;
}

float ArrayAverage(int arr[100], int arrLength)
{
   return (float) SumNumbersOfArray(arr, arrLength) / arrLength; 
}

int main()
{
   srand((unsigned)time(NULL));

   int arr[100], arrLength;   
    
    FillArrayWithRandomNumbers(arr, arrLength);
    PrintArray(arr, arrLength);
    
    cout << "Sum Of All Numbers is : ";
    cout << SumNumbersOfArray(arr, arrLength) << endl;

    cout << "Average Of All Numbers is : ";
    cout << ArrayAverage(arr, arrLength) << endl;
    return 0;
}