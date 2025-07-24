///////////////////////////////////////////////////////
//
//  File name :     Recursive_2
//  Description:    Write a recursive program which accept number from user and return summation of its digits.
//  Author :        Trupti Bhatlekar
//  Date :          23/07/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input: 879
// Output: 24
///////////////////////////////////////////////////////

#include <stdio.h>

int Sum(int iNo)
{
  if (iNo == 0)
  {
    return 0;
  }

  return (iNo % 10) + Sum(iNo / 10);
}

int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  iRet = Sum(iValue);

  printf("Summation is : %d\n", iRet);

  return 0;
}
