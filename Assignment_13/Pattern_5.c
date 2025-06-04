///////////////////////////////////////////////////////
//
//  File name :     Pattern_5
//  Description:    Accept number of rows and columns from user and display pattern. 
//  Author :        Trupti Bhatlekar
//  Date :          25/05/2025
//
///////////////////////////////////////////////////////
// Input: 3 4 
// Output: 1 2 3 4
//         5 6 7 8 
//         9 10 11 12
///////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
  int i = 0; int j = 0; int num = 1;
  for (i = 0; i < iRow; i++)
  {
    for (j = 0; j < iCol; j++)
    {
      printf("%d\t", num++);
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