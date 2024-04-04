/*
   ====================================================================================
    Problem 81
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

int ReadNumber()
{
   int Number;
   cout << "Please Enter a Number? " << endl;
   cin >> Number;
   return Number;
}

void AddArrayElement(int Number, int arr[100], int& arrLength)
{
   arr[arrLength] = Number;
   arrLength++;
}

void InputUserNumbersInArray(int arr[100], int& arrLength)
{
   bool AddMore = true;
   do
   {
      AddArrayElement(ReadNumber(), arr, arrLength);
      cout << "Do you want to add more numbers? [0]:No, [1]:Yes" << endl;
      cin >> AddMore;
   } while (AddMore); 
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
   int arr[100], arrLength = 0;
   InputUserNumbersInArray(arr, arrLength);

   cout << "Array Length: " << arrLength << endl; 
   cout << "Array Elements: "; 
   PrintArray(arr, arrLength); 
   
   return 0;
}