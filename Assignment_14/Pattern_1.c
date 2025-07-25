///////////////////////////////////////////////////////
//
//  File name :     Pattern_1
//  Description:    Accept number of rows and columns from user and display pattern. 
//  Author :        Trupti Bhatlekar
//  Date :          26/05/2025
//
///////////////////////////////////////////////////////
// Input: 4 4 
// Output: 1 2 3 4
//         5 6 7 8
//         9 1 2 3
//         4 5 6 7       
///////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
  int i = 0, j = 0, num = 1;

  for (i = 1; i <= iRow; i++)
{
    for (j = 1; j <= iCol; j++)
  {
      printf("%d\t", num);
      num++;

      if (num == 10)
      {
        num = 1;
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
