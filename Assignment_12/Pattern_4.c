///////////////////////////////////////////////////////
//
//  File name :     Pattern_4
//  Description:    Accept number of rows and columns from user and display pattern. 
//  Author :        Trupti Bhatlekar
//  Date :          25/05/2025
//
///////////////////////////////////////////////////////
// Input: 3 4 
// Output: * # * # 
//         * # * #
//         * # * #
///////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
  int i = 0;
  int j = 0;

  for (i = 1; i <= iRow; i++)
  {
    for (j = 1; j <= iCol; j++)
    {
      if (j % 2 == 0)
      {
        printf("#\t");
      }
      else
      {
        printf("*\t");
      }
    }
    printf("\n");
  }
}

int main()
{
  int iValue1 = 0, iValue2 = 0;

  printf("Enter number of rows and columns:");
  scanf("%d %d", &iValue1, &iValue2);

  Pattern(iValue1, iValue2);

  return 0;
}
