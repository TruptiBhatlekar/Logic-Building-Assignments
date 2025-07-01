///////////////////////////////////////////////////////
//
//  File name :     GenericTemp_4
//  Description:    Generic program to accept N values and search last occurrence of any specific value.
//  Author :        Trupti Bhatlekar
//  Date :          30/06/2025
//
///////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template <class T>
int SearchLast(T *arr, int iSize, T iNo)
{
  int pos = -1;
  for (int i = 0; i < iSize; i++)
  {
    if (arr[i] == iNo)
    {
      pos = i;
    }
  }
  return pos;
}

int main()
{
  int arr[] = {10, 20, 30, 10, 30, 40, 10, 40, 10};

  int iRet = SearchLast(arr, 9, 40);

  printf("%d\n", iRet); 

  return 0;
}