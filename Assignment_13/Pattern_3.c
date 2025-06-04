///////////////////////////////////////////////////////
//
//  File name :     Pattern_3
//  Description:    Accept number of rows and columns from user and display pattern. 
//  Author :        Trupti Bhatlekar
//  Date :          25/05/2025
//
///////////////////////////////////////////////////////
// Input: 4 4 
// Output: A A A A 
//         B B B B 
//         C C C C 
//         D D D D          
///////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iRow, int iCol)
{

  int i = 0; int j = 0;
  char ch = '\0';

  for (i = 0; i < iRow; i++)
  {
    ch = 'A' + i;

    for (j = 0; j < iCol; j++)
    {
      printf("%c\t", ch);
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