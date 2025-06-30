///////////////////////////////////////////////////////
//
//  File name :     GenericTemp_4
//  Description:    Generic program to return the largest value from N elements.
//  Author :        Trupti Bhatlekar
//  Date :          30/06/2025
//
///////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template <class T>
T Max(T *arr, int iSize)
{
  T max = arr[0];
  for (int i = 1; i < iSize; i++)
  {
    if (arr[i] > max)
    {
        max = arr[i];
    }
  }
  return max;
}

int main()
{
  int arr[] = {10, 20, 30, 40, 50};
  float brr[] = {10.0f, 3.7f, 9.8f, 8.7f};

  int iRet = Max(arr, 5);
  printf("%d\n", iRet);

  float fRet = Max(brr, 4);
  printf("%f\n", fRet);

  return 0;
}