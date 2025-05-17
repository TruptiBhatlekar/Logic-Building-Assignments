///////////////////////////////////////////////////////
//
//  File name :     CountOdd_2
//  Description:    Accept number and return the count of odd digits. 
//  Author :        Trupti Bhatlekar
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

int CountOdd(int iNo)
{
  int iDigit = 0, iCnt = 0;

  if (iNo < 0)
    {
        iNo = -iNo;
    }

  while (iNo != 0)
  {
    iDigit = iNo % 10;

    if (iDigit % 2 != 0)
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

  iRet = CountOdd(iValue);

  printf("%d\n", iRet);
  return 0;
}