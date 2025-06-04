///////////////////////////////////////////////////////
//
//  File name :     DisplayChar_3
//  Description:    accept character and display letters if small print reverse order; if capital print till Z.
//  Author :        Trupti Bhatlekar
//  Date :          01/06/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input: d Output: d c b a
// Input: S Output: S T U V W X Y Z 
// Input: 8 Output: 
///////////////////////////////////////////////////////

#include <stdio.h>

void Display(char ch)
{
  if (ch >= 'A' && ch <= 'Z')
  {
    for (char i = ch; i <= 'Z'; i++)
    {
      printf("%c\t", i);
    }
    printf("\n");
  }
  else if (ch >= 'a' && ch <= 'z')
  {
    for (char i = ch; i >= 'a'; i--)
    {
      printf("%c\t", i);
    }
    printf("\n");
  }
  else
  {
    printf(" ", ch);
  }
}

int main()
{
  char cValue = '\0';
  printf("Enter the character: ");
  scanf(" %c", &cValue);

  Display(cValue);
  return 0;
}