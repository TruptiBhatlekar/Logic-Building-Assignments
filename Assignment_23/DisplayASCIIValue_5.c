///////////////////////////////////////////////////////
//
//  File name :     DisplayASCIIValue_5
//  Description:    Accept character from user and display its ASCII value in decimal, octal, hexadecimal.
//  Author :        Trupti Bhatlekar
//  Date :          01/06/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input: A 
// Output: decimal: 65 , octal:0101, hexadecimal:0X41 
///////////////////////////////////////////////////////

#include <stdio.h>

void Display(char ch)
{
  printf("Decimal\t\t: %d\n", ch);
  printf("Octal\t\t: %o\n", ch);
  printf("Hexadecimal\t: 0X%X\n", ch);
}

int main()
{
  char cValue = '\0';
  printf("Enter the character: ");
  scanf(" %c", &cValue);

  Display(cValue);
  return 0;
}