///////////////////////////////////////////////////////
//
//  File name :     GenericTemp_3
//  Description:    Generic program to accept N values and return their sum.
//  Author :        Trupti Bhatlekar
//  Date :          30/06/2025
//
///////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template <class T>
T AddN(T *arr, int iSize)
{
  T iSum = 0; 
  for (int i = 0; i < iSize; i++)
  {
    iSum += arr[i];
  }
  return iSum;
}

int main()
{
  int arr[] = {10, 20, 30, 40, 50};
  float brr[] = {10.0f, 3.7f, 9.8f, 8.7f};

  int iSum = AddN(arr, 5);
  printf("%d\n", iSum);

  float fSum = AddN(brr, 4);
  printf("%f\n", fSum);

  return 0;
}