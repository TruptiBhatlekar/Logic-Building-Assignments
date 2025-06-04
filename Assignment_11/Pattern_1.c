///////////////////////////////////////////////////////
//
//  File name :     Pattern_1
//  Description:    Accept number from user to display pattern. 
//  Author :        Trupti Bhatlekar
//  Date :          25/05/2025
//
///////////////////////////////////////////////////////

/////////////////
// Input: Number from User - 5
// Output: A B C D E
/////////////////

#include <stdio.h>

void Pattern(int iNo)
{
  int iCnt = 0;
  char ch = 'A';

  for (iCnt = 0; iCnt < iNo; iCnt++)
  {
    printf("%c\t", ch);
    ch++; 
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