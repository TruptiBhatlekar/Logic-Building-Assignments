///////////////////////////////////////////////////////
//
//  File name :     GenericTemp_3
//  Description:    Generic program to accept N values and search first occurrence of any specific value.
//  Author :        Trupti Bhatlekar
//  Date :          30/06/2025
//
////////////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template <class T>
int SearchFirst(T *arr, int iSize, T iNo)
{
  for (int i = 0; i < iSize; i++)
  {
    if (arr[i] == iNo)
    {
      return i;
    }
  }
  return -1;
}

int main()
{
  int arr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};

  int iRet = SearchFirst(arr, 9, 30);

  printf("%d\n", iRet); 
  
  return 0;
}