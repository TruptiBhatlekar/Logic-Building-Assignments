///////////////////////////////////////////////////////
//
//  File name :     Pattern_2
//  Description:    Accept number from user display pattern. 
//  Author :        Trupti Bhatlekar
//  Date :          25/05/2025
//
///////////////////////////////////////////////////////

/////////////////
// Input: Number from User - 5
// Output: 5 # 4 # 3 # 2 # 1 # 
/////////////////

#include <stdio.h>

void Pattern(int iNo)
{
  int iCnt = 0;
  for (iCnt = iNo; iCnt >= 1; iCnt--)
  {
    printf("%d\t#\t", iCnt);
  }
}

int main()
{
  int iValue = 0;

  printf("Enter number of elements:\n");
  scanf("%d", &iValue);

  Pattern(iValue);

  return 0;
}