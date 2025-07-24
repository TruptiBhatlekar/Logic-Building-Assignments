///////////////////////////////////////////////////////
//
//  File name :     Recursive_2
//  Description:    Write a recursive program to display pattern.
//  Author :        Trupti Bhatlekar
//  Date :          22/07/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Output: 1 2 3 4 5 
///////////////////////////////////////////////////////

#include <stdio.h>

void Display()
{
  static int iCnt = 1;

  if (iCnt <= 5)
  {
    printf("%d\t", iCnt);
    iCnt++;
    Display();
  }
}

int main()
{
  Display();

  return 0;
}
