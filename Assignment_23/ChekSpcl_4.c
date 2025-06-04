///////////////////////////////////////////////////////
//
//  File name :     ChekSpcl_4
//  Description:    Accept character from user and check whether it is special character or not
//  Author :        Trupti Bhatlekar
//  Date :          01/06/2025
//
///////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// Input: $ Output: TRUE
// Input: 7 Output: FALSE
///////////////////////////////////////////////////////

#include <stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkSpecial(char ch)
{
  if (ch == '!' || ch == '@' || ch == '#' || ch == '$' ||
      ch == '%' || ch == '^' || ch == '&' || ch == '*')
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
  scanf(" %c", &cValue);

  bRet = ChkSpecial(cValue);
  if (bRet == TRUE)
  {
    printf("It is a special Character\n");
  }
  else
  {
    printf("It is not a special Character\n");
  }

  return 0;
}