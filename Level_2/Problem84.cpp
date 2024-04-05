/*
   ====================================================================================
    Problem 84
    Write a program to fill array with max size 100 with random numbers from 1 to 100
    then copy only prime numbers to another array using AddArrayElement and print it.
    Input: 10
    Output:
       Array 1 Elements:      27 10 68 5 13 64 22 54 27 87
       Array 2 Prime Numbers: 5 13
   ====================================================================================
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

enum enPrimNotPrime { Prime = 1, NotPrime = 2 };

enPrimNotPrime CheckPrime(int Number) 
{ 
    int M = round(Number / 2); 
    for (int Counter = 2; Counter <= M; Counter++) 
    { 
       if (Number % Counter == 0) 
       return enPrimNotPrime::NotPrime; 
    } 

   return enPrimNotPrime::Prime; 
} 

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

void AddArrayElement(int Number, int arr[100], int& arrLength)
{
   arr[arrLength] = Number;
   arrLength++;
}

void CopyPrimeNumbersInNewArray(int arrSource[100], int arrDestination[100], int arrLength, int& arr2Length)
{
    for (int i = 0; i < arrLength; i++)
    {
       if (CheckPrime(arrSource[i]) == enPrimNotPrime::Prime)
       {
            AddArrayElement(arrSource[i], arrDestination, arr2Length);
       }
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

   int arr[100], arrLength = 0, arr2Length = 0;
   FilledArrayWithRandomNumbers(arr, arrLength);
   
   int arr2[100];
   CopyPrimeNumbersInNewArray(arr, arr2, arrLength, arr2Length);

   cout << "Array 1 Elements:\n"; 
   PrintArray(arr, arrLength); 
   
   cout << "Array 2 Prime Numbers\n"; 
   PrintArray(arr2, arr2Length); 
   return 0;
}