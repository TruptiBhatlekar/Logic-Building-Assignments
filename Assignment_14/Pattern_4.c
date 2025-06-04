///////////////////////////////////////////////////////
//
//  File name :     Pattern_3
//  Description:    Accept number of rows and columns from user and display pattern. 
//  Author :        Trupti Bhatlekar
//  Date :          26/05/2025
//
///////////////////////////////////////////////////////
// Input: 5, 5
// Output: 1 2 3 4 5
//         -1 -2 -3 -4 -5 
//         1 2 3 4 5
//         -1 -2 -3 -4 -5
//         1 2 3 4 5      
///////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
  int i = 0, j = 0; int num = 0;

  for (i = 1; i <= iRow; i++)
  {
    for (j = 1; j <= iCol; j++)
    {
      num = j;
      if (i % 2 != 0)
        {
            printf("%d\t", num);
        }
      else
        {
            printf("-%d\t", num);
        }
    }
    printf("\n");
  }
}

int main()
{
  int iValue1 = 0, iValue2 = 0;

  printf("Enter number of rows and columns: ");
  scanf("%d %d", &iValue1, &iValue2);

  Pattern(iValue1, iValue2);
  return 0;
}