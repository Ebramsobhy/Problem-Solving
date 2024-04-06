/*
   ====================================================================================
    Problem 87
    Write a program to fill array with max size 100 with random numbers from 1 to 100
    then print the count of Odd numbers.
    Input: 5
    Output:
       Array Elements:            64 6 34 6 79
       The Odd Numbers Count is:  1
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

int OddCount(int arr[100], int arrLength)
{
   int Counter = 0;
   for (int i = 0; i < arrLength; i++)
     {
        if (arr[i] % 2 != 0)
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

   cout << "The Odd Numbers Count is: ";
   cout << OddCount(arr, arrLength) << endl;

   return 0;
}