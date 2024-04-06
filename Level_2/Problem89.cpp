/*
   ====================================================================================
    Problem 89
    Write a program to fill array with max size 100 with random numbers from -100 to 100
    then print the count of Positive numbers.
    Input: 10
    Output:
       Array Elements:                 72 -60 1 29 -14 20 73 -52 16 65
       The Positive Numbers Count is:  7
   ====================================================================================
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int RandomNumber(int From, int To) 
{  
    int randNum = rand() % (To - From + 1) + From; 
    return randNum; 
} 

void FilledArrayWithRandomNumbers(int arr[100], int& arrLength)
{
    cout << "Enter Number of Elements?" << endl;
    cin >> arrLength;

    for (int i = 0; i < arrLength; i++)
    {
       arr[i] = RandomNumber(-100, 100);
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

int PositiveNumbersCount(int arr[100], int arrLength)
{
   int Counter = 0;
   for (int i = 0; i < arrLength; i++)
     {
        if (arr[i] >= 0)
        {
           Counter++;
        }
     } 

     return Counter;
}

int main()
{
   srand((unsigned)time(NULL));

   int arr[100], arrLength;
   FilledArrayWithRandomNumbers(arr, arrLength);

   cout << "Array Elements: ";
   PrintArray(arr, arrLength);

   cout << "Positive Numbers Count is: ";
   cout << PositiveNumbersCount(arr, arrLength) << endl;

   return 0;
}