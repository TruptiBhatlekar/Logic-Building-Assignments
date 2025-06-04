///////////////////////////////////////////////////////
//
//  File name :     Pattern_1
//  Description:    Accept number of rows and columns from user and display pattern. 
//  Author :        Trupti Bhatlekar
//  Date :          25/05/2025
//
///////////////////////////////////////////////////////
// Input: 4 4 
// Output: A B C D
//         A B C D
//         A B C D
//         A B C D          
///////////////////////////////////////////////////////

#include <stdio.h>

void Pattern(int iRow, int iCol)
{
  int i = 0;
  int j = 0;
  char ch = '\0';

  for (i = 0; i < iRow; i++)
  {
    ch = 'A';

    for (j = 0; j < iCol; j++)
    {
      printf("%c\t", ch);
      ch++;
    }
    printf("\n");
  }
}

int main()
{
  int iValue1 = 0; 
  int iValue2 = 0; 

  printf("Enter number of rows and columns:\n");
  scanf("%d %d", &iValue1, &iValue2);

  Pattern(iValue1, iValue2); 
  return 0;
}