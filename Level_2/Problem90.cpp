/*
   ====================================================================================
    Problem 90
    Write a program to fill array with max size 100 with random numbers from -100 to 100
    then print the count of Negative numbers.
    Input: 10
    Output:
       Array Elements:                 26 45 -30 -14 -88 71 -92 -69 49 6
       The Negative Numbers Count is:  5
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

int NegativeNumbersCount(int arr[100], int arrLength)
{
   int Counter = 0;
   for (int i = 0; i < arrLength; i++)
     {
        if (arr[i] < 0)
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

   cout << "Negative Numbers Count is: ";
   cout << NegativeNumbersCount(arr, arrLength) << endl;

   return 0;
}