/*
   =======================================================================================
    Problem 51
    Write a Program to print the multiplication table from 1 to 10
   =======================================================================================
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void PrintTableHeader()
{
    cout << "\n\n\t\t\t Multiplication Table From 1 To 10 \n\n";
    cout << "\t";
    for(int i = 1; i <= 10; i++)
    {
        cout << i << "\t";
    }
    cout << "\n____________________________________________________________________________________\n";
}

string ColumSeparator(int i)
{
    if (i < 10)
       return "   |";
    else
       return "  |";
}

void PrintMultiplicationTable()
{
    PrintTableHeader();
    for (int i = 1; i <= 10; i++)
    {
        cout << " " << i << ColumSeparator(i) << "\t";
        for (int j = 1; j <= 10; j++)
        {
            cout << i * j << "\t";
        }
        cout << endl;
    }
}

int main()
{
    PrintMultiplicationTable();
    return 0;
}