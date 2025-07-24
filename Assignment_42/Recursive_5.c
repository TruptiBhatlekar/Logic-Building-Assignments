///////////////////////////////////////////////////////
//
//  File name :     Recursive_5
//  Description:    Write a recursive program which accept number from user and return its product of digits.
//  Author :        Trupti Bhatlekar
//  Date :          23/07/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input: 523
// Output: 30
///////////////////////////////////////////////////////

#include <stdio.h>

int Mult(int iNo)
{
  if (iNo == 0)
  {
    return 1;
  }

  return (iNo % 10) * Mult(iNo / 10);
}

int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  iRet = Mult(iValue);

  printf("Multiplication is : %d\n", iRet);

  return 0;
}
