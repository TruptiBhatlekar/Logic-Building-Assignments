///////////////////////////////////////////////////////
//
//  File name :     Factorial_3
//  Description:    To find a factorial of given number.
//  Author :        Trupti Bhatlekar
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include<stdio.h>

int Factorial(int iNo)
{
  int i = 0;
  int iFact = 1;

  for (i = 1; i <= iNo; i++)
  {
    iFact = iFact * i;
  }

  return iFact;
}

int main()
{
    int iValue = 0; 
    int iRet = 0;

    iRet = Factorial(iValue);
    
    printf("Factorial of number is %d", iRet);

    return 0;

}