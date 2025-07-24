///////////////////////////////////////////////////////
//
//  File name :     Recursive_5
//  Description:    Accept number from user and write a recursive program to display pattern.
//  Author :        Trupti Bhatlekar
//  Date :          23/07/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input: 6
// Output: a b c d e f
///////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
  static char ch = 'a';

  if (iNo > 0)
  {
    printf("%c\t", ch);
    ch++;
    Display(iNo - 1);
  }
}

int main()
{
  int iValue = 0;

  printf("Enter number: ");
  scanf("%d", &iValue);

  Display(iValue);

  return 0;
}
