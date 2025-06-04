///////////////////////////////////////////////////////
//
//  File name :     DisplayASCII_1
//  Description:    Display ASCII table which contains Symbol, Decimal, Hex, Octal.
//  Author :        Trupti Bhatlekar
//  Date :          01/06/2025
//
///////////////////////////////////////////////////////

#include <stdio.h>

void DisplayASCII()
{
  int i = 0;

  printf("Decimal\tHex\tOctal\tCharacter\n");
  for (int i = 0; i <= 255; i++)
  {
    printf("%d\t%X\t%o\t%c\n", i, i, i, i);
  }
}

int main()
{
  DisplayASCII();
  return 0;
}