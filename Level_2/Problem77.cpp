/*
   ====================================================================================
    Problem 77
    Write a program to fill array with ordered numbers from 1 to N, then print it
    after that shuffle this array and print it after shuffle.
    Input : 10
     Array 1 Elements  : 1 2 3 4 5 6 7 8 9 10
     Array 2 Elements  : 9 7 4 10 3 1 8 6 5 2
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

void Swap(int& A, int& B)
{
    int Temp;
    Temp = A;
    A = B;
    B = Temp;
}

void FillArrayWithOrderedNumbers(int arr[100], int arrLength)
{
     for (int i = 0; i < arrLength; i++)
     {
        arr[i] = i + 1;
     }   
}

void ShuffleArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
     {
        Swap(arr[RandomNumber(1, arrLength) - 1], arr[RandomNumber(1, arrLength) - 1]);
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

   int arr[100];
   int arrLength = ReadPositiveNumber("Enter The Number Of Elements?");   

   FillArrayWithOrderedNumbers(arr, arrLength);
   
   cout << "Array elements before shuffle:\n"; 
   PrintArray(arr, arrLength); 
 
   ShuffleArray(arr, arrLength); 

   cout << "Array elements after shuffle:\n"; 
   PrintArray(arr, arrLength); 
   return 0;
}