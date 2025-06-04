///////////////////////////////////////////////////////
//
//  File name :     Display_2
//  Description:    accept character and display its corresponding character.
//  Author :        Trupti Bhatlekar
//  Date :          01/06/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input: s Output: S
// Input: 3 Output: 4
// Input: $ Output: $
///////////////////////////////////////////////////////


#include <stdio.h>

void Display(char ch)
{
  if ((ch >= 'a') && (ch <= 'z'))

    printf("%c\n", ch - ('a' - 'A'));

  else if ((ch >= 'A') && (ch <= 'Z'))

    printf("%c\n", ch + ('a' - 'A'));

  else
    printf("%c\n", ch);
}

int main()
{
  char cValue = '\0';
  printf("Enter the character: ");
  scanf(" %c", &cValue);

  Display(cValue);
  return 0;
}