///////////////////////////////////////////////////////
//
//  File name :     DollerToRs_2
//  Description:    Accept number and print number if less than 50 print small, gretaer than 50 & less than 100 medium, greater than 100 print large.
//  Author :        Trupti Bhatlekar
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

int DollarToINR(int iNo)
{
  return iNo * 70;
}

int main()
{
  int iValue = 0;
  int iRet = 0;

  printf("Enter the number of USD:\n");
  scanf("%d", &iValue);

  iRet = DollarToINR(iValue);
  printf("Value in INR is: %d\n", iRet);

  return 0;
}