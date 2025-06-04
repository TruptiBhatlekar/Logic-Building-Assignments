///////////////////////////////////////////////////////
//
//  File name :     CheckChar_1
//  Description:    Accept character from user and check whether it is alphabet or not. 
//  Author :        Trupti Bhatlekar
//  Date :          01/06/2025
//
///////////////////////////////////////////////////////
// Input: F
// Output: TRUE
// Input: &
// Output: FALSE
///////////////////////////////////////////////////////

#include <stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkAlpha(char ch)
{
  if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
  {
    return TRUE;
  }
  else
  {
    return FALSE;
  }
}

int main()
{
  char cValue = '\0';
  BOOL bRet = FALSE;

  printf("Enter the character: ");
  scanf("%c", &cValue);

  bRet = ChkAlpha(cValue);

  if (bRet == TRUE)
  {
    printf("It is Character\n");
  }
  else
  {
    printf("It is not a Character\n");
  }
  return 0;
}