///////////////////////////////////////////////////////
//
//  File name :     GenericTemp_5
//  Description:    Generic program to accept N values and reverse the contents.
//  Author :        Trupti Bhatlekar
//  Date :          30/06/2025
//
///////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template <class T>
void Reverse(T *arr, int iSize)
{
  int start = 0, end = iSize - 1;

  while (start < end)
  {
    T temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}

int main()
{
  int arr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};
  
  for (int i = 0; i < 9; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n";

  Reverse(arr, 9);

  for (int i = 0; i < 9; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n";
  
  return 0;
}