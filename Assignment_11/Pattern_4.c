///////////////////////////////////////////////////////
//
//  File name :     Pattern_4
//  Description:    Accept number from user display pattern. 
//  Author :        Trupti Bhatlekar
//  Date :          25/05/2025
//
///////////////////////////////////////////////////////

/////////////////
// Input: Number from User - 4
// Output: # 1 * # 2 *  # 3 * # 4 *   
/////////////////

#include <stdio.h>

void Pattern(int iNo)
{
  int iCnt = 0;
  for (iCnt = 1; iCnt <= iNo; iCnt++)
  {
    printf("#\t%d\t*\t", iCnt);
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