///////////////////////////////////////////////////////
//
//  File name :     Recursive_4
//  Description:    Write a recursive program which accept number from user and return smallest digit.
//  Author :        Trupti Bhatlekar
//  Date :          23/07/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input: 78653
// Output: 3
///////////////////////////////////////////////////////

#include <stdio.h>

int Min(int iNo)
{
  static int iMin = 9;
  int iDigit = 0;

  if (iNo != 0)
  {
    iDigit = iNo % 10;
    if (iDigit < iMin)
    {
      iMin = iDigit;
    }
    Min(iNo / 10);
  }

  return iMin;
}

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  int iRet = Min(iValue);
  printf("Smallest digit is : %d\n", iRet);

  return 0;
}
