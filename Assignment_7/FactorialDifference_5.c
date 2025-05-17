///////////////////////////////////////////////////////
//
//  File name :     FactorialDiifference_5
//  Description:    Accept number and print number if less than 50 print small, gretaer than 50 & less than 100 medium, greater than 100 print large.
//  Author :        Trupti Bhatlekar
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

int EvenFactorial(int iNo)
{
  int iFact = 1;
  for (int i = 1; i <= iNo; i++)
  {
    if (i % 2 == 0)
    {
      iFact *= i;
    }
  }
  return iFact;
}

int OddFactorial(int iNo)
{
  int iFact = 1;
  for (int i = 1; i <= iNo; i++)
  {
    if (i % 2 != 0)
    {
      iFact *= i;
    }
  }
  return iFact;
}

int FactorialDiff(int iNo)
{
  return EvenFactorial(iNo) - OddFactorial(iNo);
}

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  iRet = FactorialDiff(iValue);
  printf("Difference is: %d\n", iRet);

  return 0;
}