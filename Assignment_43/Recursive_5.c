///////////////////////////////////////////////////////
//
//  File name :     Recursive_5
//  Description:    Write a recursive program which accept number from user and return its reverse number.
//  Author :        Trupti Bhatlekar
//  Date :          23/07/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input: 317
// Output: 713
///////////////////////////////////////////////////////

#include <stdio.h>

int Reverse(int iNo)
{
  static int iRev = 0;

  if (iNo != 0)
  {
    iRev = (iRev * 10) + (iNo % 10);
    Reverse(iNo / 10);
  }

  return iRev;
}

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  int iRet = Reverse(iValue);
  printf("Reverse number is : %d\n", iRet);

  return 0;
}
