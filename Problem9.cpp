/*
   ===========================================
   Problem 9
   Write a program to ask the user to enter:
   - Number1, Number2, Number3
   Then print the Sum of entered numbers
   Example:
   - Input  10, 20, 30
   - Output 60
   ===========================================
*/

#include <iostream>
#include <string>
using namespace std;

void ReadNumbers(int& Num1, int& Num2, int& Num3)
{
   cout << "Please Enter The First Number" << endl;
   cin >> Num1;
   cout << "Please Enter The Second Number" << endl;
   cin >> Num2;
   cout << "Please Enter The Third Number" << endl;
   cin >> Num3;
}

int SumOfNumbers(int Num1, int Num2, int Num3)
{        
    return Num1 + Num2 + Num3;
}

void PrintResult(int num)
{
   cout << "The Total Is: " << num;
}

int main()
{
    int Num1, Num2, Num3;

    ReadNumbers(Num1, Num2, Num3);
    PrintResult(SumOfNumbers(Num1, Num2, Num3));
    return 0;
}

// Another Solution Using Array

void ReadNumbers(int arr[3])
{
   cout << "Please Enter The First Number" << endl;
   cin >> arr[0];
   cout << "Please Enter The Second Number" << endl;
   cin >> arr[1];
   cout << "Please Enter The Third Number" << endl;
   cin >> arr[2];
}

int SumOfNumbers(int arr[3])
{        
    return arr[0] + arr[1] + arr[2];
}

void PrintResult(int num)
{
   cout << "The Total Is: " << num;
}

int main()
{
    int arr[3];
    ReadNumbers(arr);
    PrintResult(SumOfNumbers(arr));
    return 0;
}