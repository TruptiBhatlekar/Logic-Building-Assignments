///////////////////////////////////////////////////////
//
//  File name :     Recursive_4
//  Description:    Write a recursive program to display pattern.
//  Author :        Trupti Bhatlekar
//  Date :          22/07/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Output: A B C D E F 
///////////////////////////////////////////////////////

#include <stdio.h>

void Display()
{
  static char ch = 'A';

  if (ch <= 'F')
  {
    printf("%c\t", ch);
    ch++;
    Display();
  }
}

int main()
{
  Display();

  return 0;
}
