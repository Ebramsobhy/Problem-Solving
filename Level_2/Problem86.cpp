/*
   ====================================================================================
    Problem 86
    Write a program to fill array with numbers, then check if it is Palindrome array 
    or not.
    Note: Palindrome array can be read the same from right to left and from left to right. 
        Array Elements:           10 20 30 30 20 10 
        Output :               Yes array is Palindrome        
   ====================================================================================
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

void FillArray(int arr[100], int& arrLength)
{
    // 10 20 30 30 20 10
     arrLength = 6;
     arr[0] = 10;
     arr[1] = 20;
     arr[2] = 30;
     arr[3] = 30;
     arr[4] = 20;
     arr[5] = 10;
}

void PrintArray(int arr[100], int arrLength)
{
   for (int i = 0; i < arrLength; i++)
     {
        cout << arr[i] << " ";
     } 
     cout << endl;
}

bool IsPalindromeArray(int arr[100], int Length) 
{ 
    for (int i = 0; i < Length; i++) 
    { 
        if (arr[i] != arr[Length - i - 1]) 
        { 
            return false; 
        } 
    }; 

    return true; 
}

int main()
{
   int arr[100], Length = 0;
   FillArray(arr, Length);

   cout << "Array Elements:\n"; 
   PrintArray(arr, Length); 
   
   if (IsPalindromeArray(arr, Length)) 
       cout << "Yes array is Palindrome\n"; 
   else
       cout << "NO array is NOT Palindrome\n"; 

   return 0;
}