/*
   ====================================================================================
    Problem 78
    Write a program to fill array with max size 100 with random numbers from 1 to 100,
    copy it to another array in reverse order and print it.
    Input : 10
     Array 1 Elements  : 51 71 22 67 33 32 64 18 61 35
     Array 2 Elements  : 35 61 18 64 32 33 67 22 71 51
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

void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
     cout << "Enter The Number of Elements" << endl;
     cin >> arrLength;
     
     for (int i = 0; i < arrLength; i++)
     {
        arr[i] = RandomNumber(1, 100);
     }   
}

void CopyArrayInReverseOrder(int arrSource[100], int arrDestination[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
     {
       arrDestination[i] = arrSource[arrLength - 1 - i];
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

   int arr[100], arrLength;  
   FillArrayWithRandomNumbers(arr, arrLength); 
   
   int arr2[100];
   CopyArrayInReverseOrder(arr, arr2, arrLength); 
    
   cout << "Array 1 Elements:\n"; 
   PrintArray(arr, arrLength);

   cout << "Array 2 Elements after copy:\n"; 
   PrintArray(arr2, arrLength); 
   return 0;
}