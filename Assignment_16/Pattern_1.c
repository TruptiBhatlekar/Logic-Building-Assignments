///////////////////////////////////////////////////////
//
//  File name :     Pattern_1
//  Description:    Accept number of rows and columns from user and display pattern. 
//  Author :        Trupti Bhatlekar
//  Date :          26/05/2025
//
///////////////////////////////////////////////////////
// Input: 4  
// Output: * 
//         * * 
//         * * * 
//         * * * * 
///////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
  int i = 0, j = 0;
  for (i = 1; i <= iRow; i++)
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
  int iValue1 = 0; int iValue2 = 0;

  printf("Enter number of rows:\n");
  scanf("%d", &iValue1);

  Pattern(iValue1, 0);

  return 0;
}