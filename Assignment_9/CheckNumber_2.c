///////////////////////////////////////////////////////
//
//  File name :     CheckNumber_2
//  Description:    Accept number and check whether number it contains 0 in it or not
//  Author :        Trupti Bhatlekar
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;
    if (iNo < 0)
    {
        iNo = -iNo;
    }
    while (iNo != 0)
    {
    iDigit = iNo % 10;
    if (iDigit == 0)
    {
      return TRUE;
    }
    iNo = iNo / 10;
  }

  return FALSE;
}

int main()
{
  int iValue = 0;
  BOOL bRet = FALSE;

  printf("Enter number: ");
  scanf("%d", &iValue);

  bRet = ChkZero(iValue);
  if (bRet == TRUE)
  {
    printf("It Contains Zero\n");
  }
  else
  {
    printf("There is no Zero\n");
  }

  return 0;
}