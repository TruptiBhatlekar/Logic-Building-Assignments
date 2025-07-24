///////////////////////////////////////////////////////
//
//  File name :     Recursive_1
//  Description:    Write a recursive program to display pattern.
//  Author :        Trupti Bhatlekar
//  Date :          22/07/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Output: * * * * * 
///////////////////////////////////////////////////////

#include <stdio.h>

void Display()
{
  static int iCnt = 1;

  if (iCnt <= 5)
  {
    printf("*\t");
    iCnt++;
    Display();
  }
}

int main()
{
  Display();

  return 0;
}
