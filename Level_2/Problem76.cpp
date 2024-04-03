/*
   ====================================================================================
    Problem 76
    Write a program to fill array with max size 100 with random numbers from 1 to 100
    then sum their elements in a third array and print the results.
    Input : 5
     Array 1 Elements  : 45 57 59 14 60
     Array 2 Elements  : 95 53 27 8 99
     Sum Of 1,2 Arrays : 140 110 86 22 159
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

void FillArrayWithRandomNumbers(int arr[100], int arrLength)
{
     for (int i = 0; i < arrLength; i++)
     {
        arr[i] = RandomNumber(1, 100);
     }   
}

void SumArrays(int arr[100], int arr2[100], int arrSum[100], int arrLength)
{
   for (int i = 0; i < arrLength; i++)
     {
        arrSum[i] = arr[i] + arr2[i];
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

int main()
{
   srand((unsigned)time(NULL));

   int arr[100], arr2[100], arrSum[100];
   int arrLength = ReadPositiveNumber("Enter The Number Of Elements? \n");   
    
   FillArrayWithRandomNumbers(arr, arrLength);
   FillArrayWithRandomNumbers(arr2, arrLength);
   
   SumArrays(arr, arr2, arrSum, arrLength);

   cout << "Array 1 Elements : " << endl;
   PrintArray(arr, arrLength);

   cout << "Array 2 Elements : " << endl;
   PrintArray(arr2, arrLength);
   
   cout << "Sum of array1 and array2 elements : " << endl;
   PrintArray(arrSum, arrLength);

   return 0;
}