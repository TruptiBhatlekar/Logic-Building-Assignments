///////////////////////////////////////////////////////
//
//  File name :     Pattern_4
//  Description:    Accept number of rows and columns from user and display pattern. 
//  Author :        Trupti Bhatlekar
//  Date :          26/05/2025
//
///////////////////////////////////////////////////////
// Input: 6 6
// Output: * * * * * *
//         * # # # * *      
//         * # # * $ *      
//         * # * $ $ *      
//         * * $ $ $ *      
//         * * * * * *      
///////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
  int i = 0, j = 0;

  for (int i = 1; i <= iRow; i++)
  {
    for (int j = 1; j <= iCol; j++)
    {
      if (i == 1 || i == iRow || j == 1 || j == iCol)
    {
        printf("* ");
    }
    else if (j <= iCol - i)
    {
        printf("# ");
    }
    else
    {
        printf("$ ");
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