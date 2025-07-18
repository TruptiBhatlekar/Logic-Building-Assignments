///////////////////////////////////////////////////////
//
//  File name :     Pattern_2
//  Description:    Accept number of rows and columns from user and display pattern. 
//  Author :        Trupti Bhatlekar
//  Date :          26/05/2025
//
///////////////////////////////////////////////////////
// Input: 4 4 
// Output: * * * #
//         * * # @
//         * # @ @ 
//         # @ @ @        
///////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
  int i = 0, j = 0;

  for (int i = 1; i <= iRow; i++)
  {
    for (int j = 1; j <= iCol; j++)
    {
      if (j < (iCol - i + 1))
      {
        printf("* ");
      }
      else if (j == (iCol - i + 1))
      {
        printf("# ");
      }
      else
      {
        printf("@ ");
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
