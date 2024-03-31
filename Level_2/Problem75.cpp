/*
   ====================================================================================
    Problem 75
    Write a program to fill array with max size 100 with random numbers from 1 to 100
    then copy only prime numbers to another array and print it.
    Input : 10
     Array 1 Elements : 25 21 45 71 83 23 39 86 94 59
     Prime Numbers : 71 83 23
   ====================================================================================
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

enum enPrimNotPrime {Prime = 1, NotPrime = 2};

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
   for (int i = 0; i < arrLength; i++)
     {
        cout << arr[i] << " ";
     } 
     cout << endl;
}

void CopyOnlyPrimeNumbers(int arrSource[100], int arrDestination[100], int arrLength, int& arr2Length)
{
   int Counter = 0;
   for (int i = 0; i < arrLength; i++)
     {
        if (CheckPrime(arrSource[i]) == enPrimNotPrime::Prime)
        {
           arrDestination[Counter] = arrSource[i];
           Counter++;
        } 
     }
   arr2Length = --Counter;  
}

int main()
{
   srand((unsigned)time(NULL));

   int arr[100], arrLength;   
    
   FillArrayWithRandomNumbers(arr, arrLength);
   
   int arr2[100], arr2Length = 0;
   CopyOnlyPrimeNumbers(arr, arr2, arrLength, arr2Length);

   cout << "Array 1 Elements : " << endl;
   PrintArray(arr, arrLength);
    
   cout << "Prime Numbers In Array 2 : " << endl;
   PrintArray(arr2, arr2Length);

   return 0;
}