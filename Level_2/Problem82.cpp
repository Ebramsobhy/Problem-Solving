/*
   ====================================================================================
    Problem 82
    Write a program to dynamically read numbers and save them in an array
    max size of array is 100, allocate simi-dynamic array length.
    Output:
        Please Enter a number ? 10
        Do You want to add more numbers ? [0]:No , [1]:Yes 
        1
        Please Enter a number ? 20
        Do You want to add more numbers ? [0]:No , [1]:Yes
        1
        Please Enter a number ? 30
        Do You want to add more numbers ? [0]:No , [1]:Yes
        0
        Array Length : 3
        Array Elements : 10 20 30
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

void AddArrayElement(int Number, int arr[100], int& arrLength)
{
   arr[arrLength] = Number;
   arrLength++;
}

void CopyArrayUsingAddArrayElement(int arrSource[100], int arrDestination[100], int arrLength, int& arr2Length)
{
    for (int i = 0; i < arrLength; i++)
    {
       AddArrayElement(arrSource[i], arrDestination, arr2Length);
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
   int arr[100], arrLength = 0, arr2Length = 0;
   FilledArrayWithRandomNumbers(arr, arrLength);
   
   int arr2[100];
   CopyArrayUsingAddArrayElement(arr, arr2, arrLength, arr2Length);

   cout << "Array 1 Elements:\n"; 
   PrintArray(arr, arrLength); 
   
   cout << "Array 2 Elements After Copy:\n"; 
   PrintArray(arr2, arr2Length); 
   return 0;
}