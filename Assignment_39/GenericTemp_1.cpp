///////////////////////////////////////////////////////
//
//  File name :     GenericTemp_1
//  Description:    Generic program which accept one value and one number from user. Print that value that number of times on screen.
//  Author :        Trupti Bhatlekar
//  Date :          30/06/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input: M 7
// Output: M   M   M   M   M   M   M
// Input: 3 2
// Output: 3 3 
///////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template <class T>
void Display(T value, int iSize)
{
  for (int i = 0; i < iSize; i++)
  {
    cout << value << " ";
  }
  cout << "\n";
}

int main()
{
  Display('M', 7);
  Display(11, 3);
  Display(3.7, 6);

  return 0;
}