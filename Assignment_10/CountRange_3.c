///////////////////////////////////////////////////////
//
//  File name :     CountRange_3
//  Description:    Accept number and print number if less than 50 print small, gretaer than 50 & less than 100 medium, greater than 100 print large.
//  Author :        Trupti Bhatlekar
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

int CountRange(int iNo)
{
  int iDigit = 0, iCnt = 0;

  if (iNo < 0)
    {
        iNo = -iNo;
    }

  while (iNo != 0)
  {
    iDigit = iNo % 10;

    if (iDigit >= 3 && iDigit <= 7)
    {
      iCnt++;
    }

    iNo = iNo / 10;
  }

  return iCnt;
}

int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  iRet = CountRange(iValue);

  printf("%d\n", iRet);
  return 0;
}