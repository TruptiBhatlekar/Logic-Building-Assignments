///////////////////////////////////////////////////////
//
//  File name :     Pattern_2
//  Description:    Accept number of rows and columns from user and display pattern. 
//  Author :        Trupti Bhatlekar
//  Date :          26/05/2025
//
///////////////////////////////////////////////////////
// Input: 4 
// Output: * * * *
//         * * *
//         * *  
//         * 
///////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
  int i = 0, j = 0;

  for (i = iRow; i >= 1; i--)
  {
    for (j = 1; j <= i; j++)
    {
      printf("*\t");
    }
    printf("\n");
  }
}

int main()
{
  int iValue1 = 0;

  printf("Enter number of rows:\n");
  scanf("%d", &iValue1);

  Pattern(iValue1, 0);

  return 0;
}