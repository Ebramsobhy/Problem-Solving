/*
   ====================================================================================
    Problem 88
    Write a program to fill array with max size 100 with random numbers from 1 to 100
    then print the count of Even numbers.
    Input: 5
    Output:
       Array Elements:            45 16 66 38 31
       The Odd Numbers Count is:  3
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

int EvenCount(int arr[100], int arrLength)
{
   int Counter = 0;
   for (int i = 0; i < arrLength; i++)
     {
        if (arr[i] % 2 == 0)
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

   cout << "The Even Numbers Count is: ";
   cout << EvenCount(arr, arrLength) << endl;

   return 0;
}