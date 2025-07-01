////////////////////////////////////////////////////////////////
//
//  File name :     GenericTemp_2
//  Description:    Generic program to accept N values and count frequency of any specific value.
//  Author :        Trupti Bhatlekar
//  Date :          30/06/2025
//
////////////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template <class T>
int Frequency(T *arr, int iSize, T iNo)
{
  int iCount = 0;
  for (int i = 0; i < iSize; i++)
  {
    if (arr[i] == iNo)
    {
      iCount++;
    }
  }
  return iCount;
}

int main()
{
    int arr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};
    int iRet = Frequency(arr, 9, 10);
    
    printf("%d\n", iRet); // 4

    return 0;
}