/*
   ====================================================================================
    Problem 65
    Write a program to print 3 random numbers from 1 to 10.
   ====================================================================================
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int RandomNumber(int From, int To)
{
   int randNum = rand() % (To - From + 1) + From;
   return randNum;
}

int main()
{
    srand((unsigned)time(NULL));
    cout << RandomNumber(1, 10) << endl; 
    return 0;
}