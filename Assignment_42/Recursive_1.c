///////////////////////////////////////////////////////
//
//  File name :     Recursive_1
//  Description:    Write a recursive program which accept number from user to display pattern. 
//  Author :        Trupti Bhatlekar
//  Date :          23/07/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input: 5
// Output: 5 * 4 * 3 * 2 * 1 * 
///////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
  if (iNo > 0)
  {
    printf("%d * ", iNo);
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
