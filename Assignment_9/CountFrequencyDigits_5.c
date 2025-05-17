///////////////////////////////////////////////////////
//
//  File name :     CountFrequencyDigits_5
//  Description:    Accept number and print number if less than 50 print small, gretaer than 50 & less than 100 medium, greater than 100 print large.
//  Author :        Trupti Bhatlekar
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

int Count(int iNo)
{
  int iCnt = 0, iDigit = 0;

  if (iNo < 0)
  {
    iNo = -iNo;
  }

  while (iNo != 0)
{
    iDigit = iNo % 10;

    if (iDigit < 6)
    {
      iCnt++;
    }

    iNo = iNo / 10;
}

  return iCnt;
}

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  iRet = Count(iValue);
  printf("%d\n", iRet);

  return 0;
}