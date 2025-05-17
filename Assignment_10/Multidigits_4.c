///////////////////////////////////////////////////////
//
//  File name :     Multidigits_4
//  Description:    Accept number and return multiplication of all digits.
//  Author :        Trupti Bhatlekar
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

int MultDigits(int iNo)
{
  int iDigit = 0, iMult = 1;
  int hasNonZero = 0;

  if (iNo < 0)
    iNo = -iNo;

  while (iNo != 0)
  {
    iDigit = iNo % 10;

    if (iDigit != 0)
    {
      iMult = iMult * iDigit;
      hasNonZero = 1;
    }

    iNo = iNo / 10;
  }

  return hasNonZero ? iMult : 0;
}

int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  iRet = MultDigits(iValue);

  printf("%d\n", iRet);
  return 0;
}