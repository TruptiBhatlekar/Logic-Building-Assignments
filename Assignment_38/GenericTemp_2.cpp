///////////////////////////////////////////////////////
//
//  File name :     GenericTemp_2
//  Description:    To find the largest number from three numbers.
//  Author :        Trupti Bhatlekar
//  Date :          30/06/2025
//
///////////////////////////////////////////////////////

#include <iostream>
using namespace std;

template <class T>
T Max(T no1, T no2, T no3)
{
  T max = no1;
  if (no2 > max)
  {
    max = no2;
  }
  if (no3 > max)
  {
    max = no3;
  }
  return max;
}

int main()
{
    int iRet = Max(30, 108, 37);
    printf("Largest number from elements: %d\n",iRet);

    float fRet = Max(26.2f, 21.3f, 3.10f);
    printf("Largest number from elements: %f\n",fRet);

  return 0;
}