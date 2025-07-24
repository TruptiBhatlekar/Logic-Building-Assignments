///////////////////////////////////////////////////////
//
//  File name :     Recursive_2
//  Description:    Accept number from user and write a recursive program to display pattern.
//  Author :        Trupti Bhatlekar
//  Date :          23/07/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input: 5
// Output: 1 2 3 4 5
///////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
  static int iCnt = 1;

  if (iCnt <= iNo)
  {
    printf("%d\t", iCnt);
    iCnt++;
    Display(iNo);
  }
}

int main()
{
  int iValue = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  Display(iValue);

  return 0;
}
