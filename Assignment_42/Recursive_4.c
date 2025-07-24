///////////////////////////////////////////////////////
//
//  File name :     Recursive_4
//  Description:    Write a recursive program which accept number from user and return its factorial.
//  Author :        Trupti Bhatlekar
//  Date :          23/07/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input: 5
// Output: 120
///////////////////////////////////////////////////////

#include <stdio.h>

int Fact(int iNo)
{
  if (iNo <= 1)
  {
    return 1;
  }

  return iNo * Fact(iNo - 1);
}

int main()
{
  int iValue = 0, iRet = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  iRet = Fact(iValue);

  printf("Factorial is : %d\n", iRet);

  return 0;
}
