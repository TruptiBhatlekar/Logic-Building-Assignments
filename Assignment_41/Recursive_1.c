///////////////////////////////////////////////////////
//
//  File name :     Recursive_1
//  Description:    Accept number from user and write a recursive program to display pattern.
//  Author :        Trupti Bhatlekar
//  Date :          23/07/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input: 5
// Output: * * * * * 
///////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
  if (iNo > 0)
  {
    printf("*\t");
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
