///////////////////////////////////////////////////////
//
//  File name :     DigitsInRev_1
//  Description:    Accept number and display its digits in reverse order. 
//  Author :        Trupti Bhatlekar
//  Date :          17/05/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

void DisplayDigit(int iNo)
{
  while (iNo != 0)
  {
    int iDigit = iNo % 10;

    printf("%d\n", iDigit);
    
    iNo = iNo / 10;
  }
}

int main()
{
  int iValue = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  DisplayDigit(iValue);

  return 0;
}