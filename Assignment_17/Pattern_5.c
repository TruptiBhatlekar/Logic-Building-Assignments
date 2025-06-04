///////////////////////////////////////////////////////
//
//  File name :     Pattern_5
//  Description:    Accept number of rows and columns from user and display pattern. 
//  Author :        Trupti Bhatlekar
//  Date :          26/05/2025
//
///////////////////////////////////////////////////////
// Input: 5, 5
// Output: 1 2 3 4 5
//         1 2     5
//         1   3   5
//         1     4 5
//         1 2 3 4 5    
///////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
  int i = 0, j = 0;

  for (i = 1; i <= iRow; i++)
  {
    for (j = 1; j <= iCol; j++)
    {
      if (i == 1 || i == iRow || j == 1 || j == iCol || i == j)
    {
        printf("%d ", j);
    }
    else
    {
        printf("  ");
    }
    }
    printf("\n");
  }
}

int main()
{
    int iValue1 = 0; 
    int iValue2 = 0;

    printf("Enter number of rows:");
    scanf("%d", &iValue1);

    printf("Enter number of columns:");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}