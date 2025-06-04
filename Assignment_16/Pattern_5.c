///////////////////////////////////////////////////////
//
//  File name :     Pattern_5
//  Description:    Accept number of rows and columns from user and display pattern. 
//  Author :        Trupti Bhatlekar
//  Date :          26/05/2025
//
///////////////////////////////////////////////////////
// Input: 4, 4
// Output: 1 2 3 4 
//           2 3 4 
//             3 4
//               4
///////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
  int i = 0, j = 0;

  for (i = 1; i <= iRow; i++)
  {
    for (j = 1; j <= iCol; j++)
    {
      if (j >= i)
      {
        printf("%d\t", j);
      }
      else
      {
        printf(" \t");
      }
    }
    printf("\n");
  }
}

int main()
{
  int iValue1 = 0, iValue2 = 0;

  printf("Enter number of rows and columns:\n");
  scanf("%d %d", &iValue1, &iValue2);

  Pattern(iValue1, iValue2);

  return 0;
}
